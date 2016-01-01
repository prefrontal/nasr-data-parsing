#include <cmath>
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
	double degrees = atof(input.substr(0,2).c_str());
	double minutes = atof(input.substr(2,2).c_str());
	double seconds = atof(input.substr(4,2).c_str());
	
	double final = degrees + minutes/60 + seconds/60/60;
	//std::cout << final << ": " << degrees << ", " << minutes << ", " << seconds << std::endl;
	
	std::string output;
	
	std::stringstream ss;
	ss << final;
	ss >> output;
	
	return output;
}

int main (int argc, char *argv[]) 
{	
	std::ifstream infile ("WXL.txt");
	std::ofstream outFile;
	
	outFile.open ("weather-objc.txt");
	
	std::string line;
	
	while (std::getline (infile, line))
	{	
		std::istringstream iss (line);
		
		std::string input = iss.str();
		
		std::string identifier = trim(input.substr(0,5));

		std::string latitude = ConvertToDecimal(input.substr(5,8));
		std::string longitude = ConvertToDecimal(input.substr(13,8));
		
		std::string elevation = trim(input.substr(53,5));
		std::string elevationAccuracy = trim(input.substr(58,1));
		
		std::string associatedCity = trim(input.substr(22,26));
		std::string associatedState = trim(input.substr(48,2));
		std::string associatedCounty = trim(input.substr(50,3));

		std::string servicesAvailable = trim(input.substr(59,60));

			std::cout << identifier << std::endl;
			std::cout << latitude << ", " << longitude << std::endl;
			std::cout << elevation << ", " << elevationAccuracy << std::endl;
			std::cout << associatedCity << ", " << associatedState << ", " << associatedCounty << std::endl;
			std::cout << servicesAvailable << std::endl;
			std::cout << std::endl;

	}
	
	outFile.close();
}

