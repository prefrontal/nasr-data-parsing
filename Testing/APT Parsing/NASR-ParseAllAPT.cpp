#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

void PrintAirport (const std::string input)
{
}

int main (int argc, char *argv[]) 
{	
	std::ifstream infile ("APT.txt");
	std::ofstream outFile;
	
	outFile.open ("airports.txt");
	
	std::string line;
	
	while (std::getline (infile, line))
	{	
		std::istringstream iss (line);
		
		std::string input = iss.str();
		std::string type = input.substr(0,3);
			
		if (0 == type.compare("APT"))
		{
			std::string airport = input.substr(27,4);
			std::string latitude = input.substr(538,12);
			std::string longitude = input.substr(565,12);
			
			std::cout << airport << ": " << latitude << ", " << longitude << std::endl;
			outFile << airport << ": " << longitude << ", " << latitude << std::endl;
		}
	}
	
	outFile.close();
}