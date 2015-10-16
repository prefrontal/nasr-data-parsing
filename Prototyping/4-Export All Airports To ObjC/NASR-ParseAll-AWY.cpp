#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

std::string trim (std::string str)
{
	if (1 >= str.size())
		return str;
	
	size_t first = str.find_first_not_of(' ');
	size_t last = str.find_last_not_of(' ');
	
	if ((std::string::npos == first) || (std::string::npos == last))
		return "";
	
	return str.substr (first, (last-first+1));
}

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
	std::ifstream infile ("AWY.txt");
	std::ofstream outFile;
	
	outFile.open ("airway-objc.txt");
	
	std::string currentAirway = "";
	
	std::string line;
	
	while (std::getline (infile, line))
	{	
		std::istringstream iss (line);
		
		std::string input = iss.str();
		std::string type = input.substr(0,4);
			
		if (0 == type.compare("AWY2"))
		{
			std::string designation = trim(input.substr(4,5));
			std::string type        = input.substr(9,1);
			std::string sequenceId  = trim(input.substr(10,5));
			
			std::string navaidName = trim(input.substr(15,30));
			std::string navaidType = trim(input.substr(45,19));
			
			std::string latitude = ConvertToDecimal(input.substr(83,14));
			std::string longitude = ConvertToDecimal(input.substr(97,14));
			
			if (0 != type.compare(" "))
				continue;
			
			if (0 != designation.compare(currentAirway))
			{
				if (0 != currentAirway.compare(""))
					std::cout << "[airways addObject:" << currentAirway << "];" << std::endl << std::endl;
				
				std::cout << "VXAirway *" << designation << " = [VXAirway new];" << std::endl;
				std::cout << designation << ".identifier = @\"" << designation << "\";"  << std::endl;
				std::cout << std::endl;
				
				currentAirway = designation;	
			}
			
			if (0 == navaidType.compare("AWY-INTXN"))
				continue;
			else if (0 == navaidType.compare("ARTCC-BDRY"))
				continue;
			else if (0 == navaidType.compare(""))
				continue;

			std::cout << "    " << "VXNavigationAid *" << "r" << designation << "p" << sequenceId << " = [VXNavigationAid new];" << std::endl;
			std::cout << "    " << "r" << designation << "p" << sequenceId  << ".identifier = @\"\";" << std::endl;
			std::cout << "    " << "r" << designation << "p" << sequenceId  << ".latitude = " << latitude << ";" << std::endl;
			std::cout << "    " << "r" << designation << "p" << sequenceId  << ".longitude = -" << longitude << ";" << std::endl;
			std::cout << "    " << "[[" << currentAirway << " waypoints] addObject:" << "r" << designation << "p" << sequenceId  << "];" << std::endl;
			std::cout << std::endl;
			
			//std::cout << designation << ": " << sequenceId << ", " << navaidName << ", " << navaidType << ", " << latitude << ", " << longitude << std::endl;
			//outFile << designation << ": " << sequenceId << ", " << navaidName << ", " << navaidType << ", " << latitude << ", " << longitude << std::endl;
		}
	}
	
	std::cout << "[airways addObject:" << currentAirway << "];" << std::endl;
	
	outFile.close();
}

