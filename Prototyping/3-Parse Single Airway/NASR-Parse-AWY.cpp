#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

std::string ConvertToDecimal (const std::string input)
{
	std::vector<std::string> strings;
	
	std::stringstream aStream (input);
	std::string temp;
	    
	while (getline(aStream, temp, '-'))
		strings.push_back(temp);
		
	std::string output = "0.0";
		
	if (3 != strings.size())
		return output;

	double degrees = atof(strings[0].c_str());
	double minutes = atof(strings[1].c_str());
	double seconds = atof(strings[2].c_str());
	
	double final = degrees + minutes/60 + seconds/60/60;
	//std::cout << final << ": " << degrees << ", " << minutes << ", " << seconds << std::endl;
	
	std::stringstream ss;
	ss << final;
	ss >> output;
	
	return output;
}

int main (int argc, char *argv[]) 
{	
	std::ifstream infile ("AWY-V386.txt");
	std::ofstream outFile;
	
	outFile.open ("airway.txt");
	
	std::string line;
	
	while (std::getline (infile, line))
	{	
		std::istringstream iss (line);
		
		std::string input = iss.str();
		std::string type = input.substr(0,4);
			
		if (0 == type.compare("AWY2"))
		{
			// J = JET ROUTE (J804R J802E J800)
			// V = VOR AIRWAY (V16, V402S)
			// A = AMBER COLORED AIRWAY (A16)
			// B = BLUE COLORED AIRWAY (B9)
			// G = GREEN COLORED AIRWAY (G13)
			// R = RED COLORED AIRWAY (R39)
			// Q = GPS RNAV ROUTES (Q102)
			// T = GPS RNAV ROUTES (T238)
			
			std::string designation = input.substr(4,5);
			std::string sequenceId = input.substr(10,5);
			
			std::string navaidName = input.substr(15,30);
			std::string navaidType = input.substr(45,19);
			
			std::string latitude = ConvertToDecimal(input.substr(83,14));
			std::string longitude = ConvertToDecimal(input.substr(97,14));
			
			if (0 == navaidType.compare("AWY-INTXN          "))
				continue;
			else if ( 0 == navaidType.compare("ARTCC-BDRY         "))
				continue;
			
			std::cout << designation << ": " << sequenceId << ", " << navaidName << ", " << navaidType << ", " << latitude << ", " << longitude << std::endl;
			outFile << designation << ": " << sequenceId << ", " << navaidName << ", " << navaidType << ", " << latitude << ", " << longitude << std::endl;
		}
	}
	
	outFile.close();
}

