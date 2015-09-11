#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

namespace
{
	struct Entry
	{
		std::string identifier;
		int startPosition;
		int elementLength;
		
		Entry (const std::string id, const int start, const int length) : 
			identifier (id), startPosition (start), elementLength (length) {};
	};
	
	std::vector<Entry> airportEntries;
		
}

void LoadAptEntries ()
{
	// --- Landing Facility Data ----------------
	
	airportEntries.push_back ( Entry("RECORD TYPE INDICATOR", 0, 3) );
	
	airportEntries.push_back ( Entry("LANDING FACILITY SITE NUMBER", 3, 11) );

	airportEntries.push_back ( Entry("LANDING FACILITY TYPE", 14, 13) );
	
	airportEntries.push_back ( Entry("LOCATION IDENTIFIER", 27, 4) );
	
	airportEntries.push_back ( Entry("INFORMATION EFFECTIVE DATE", 31, 10) );

	// --- Demographic Data ----------------------

	airportEntries.push_back ( Entry("FAA REGION CODE", 41, 3) );
	
	airportEntries.push_back ( Entry("FAA DISTRICT OR FIELD OFFICE CODE", 44, 4) );
	
	airportEntries.push_back ( Entry("ASSOCIATED STATE POST OFFICE CODE", 48, 2) );
	
	airportEntries.push_back ( Entry("ASSOCIATED STATE NAME", 50, 20) );
	
	airportEntries.push_back ( Entry("ASSOCIATED COUNTY (OR PARISH) NAME", 70, 21) );

	airportEntries.push_back ( Entry("ASSOCIATED COUNTY'S STATE", 91, 2) );
	
	airportEntries.push_back ( Entry("ASSOCIATED CITY NAME", 93, 40) );
	
	airportEntries.push_back ( Entry("OFFICIAL FACILITY NAME", 133, 50) );
	
	// --- Ownership Data ------------------------
	
	airportEntries.push_back ( Entry("AIRPORT OWNERSHIP TYPE", 183, 2) );
	
	airportEntries.push_back ( Entry("FACILITY USE", 185, 2) );
	
	airportEntries.push_back ( Entry("FACILITY OWNER'S NAME", 187, 35) );
	
	airportEntries.push_back ( Entry("OWNER'S ADDRESS", 222, 72) );
		
	airportEntries.push_back ( Entry("OWNER'S CITY, STATE AND ZIP CODE", 294, 45) );

	airportEntries.push_back ( Entry("OWNER'S PHONE NUMBER", 339, 16) );

	airportEntries.push_back ( Entry("FACILITY MANAGER'S NAME", 355, 35) );

	airportEntries.push_back ( Entry("MANAGER'S ADDRESS", 390, 72) );

	airportEntries.push_back ( Entry("MANAGER'S CITY, STATE AND ZIP CODE", 462, 45) );

	airportEntries.push_back ( Entry("MANAGER'S PHONE NUMBER", 507, 16) );
	
	// --- Geographic Data ---------------------------
	
	airportEntries.push_back ( Entry("AIRPORT REFERENCE POINT LATITUDE (FORMATTED)", 523, 15) );
	
	airportEntries.push_back ( Entry("AIRPORT REFERENCE POINT LATITUDE (SECONDS)", 538, 12) );
	
	airportEntries.push_back ( Entry("AIRPORT REFERENCE POINT LONGITUDE (FORMATTED)", 550, 15) );
	
	airportEntries.push_back ( Entry("AIRPORT REFERENCE POINT LONGITUDE (SECONDS)", 565, 12) );
	
	airportEntries.push_back ( Entry("AIRPORT REFERENCE POINT DETERMINATION METHOD", 577, 1) );
	
	airportEntries.push_back ( Entry("AIRPORT ELEVATION", 578, 7) );
	
	airportEntries.push_back ( Entry("AIRPORT ELEVATION DETERMINATION METHOD", 585, 1) );
	
	airportEntries.push_back ( Entry("MAGNETIC VARIATION AND DIRECTION", 586, 3) );
	
	airportEntries.push_back ( Entry("MAGNETIC VARIATION EPOCH YEAR", 589, 4) );
	
	airportEntries.push_back ( Entry("TRAFFIC PATTERN ALTITUDE", 593, 4) );
	
	airportEntries.push_back ( Entry("AERONAUTICAL SECTIONAL CHART", 597, 30) );
	
	airportEntries.push_back ( Entry("DISTANCE FROM CENTRAL BUSINESS DISTRICT", 627, 2) );
	
	airportEntries.push_back ( Entry("DIRECTION OF AIRPORT FROM CENTRAL BUSINESS DISTRICT", 629, 3) );
	
	airportEntries.push_back ( Entry("LAND AREA COVERED BY AIRPORT", 632, 5) );
	
	// ------------------------------
	
	airportEntries.push_back ( Entry("BOUNDARY ARTCC IDENTIFIER", 637, 4) );
	
	airportEntries.push_back ( Entry("BOUNDARY ARTCC (FAA) COMPUTER IDENTIFIER", 641, 3) );
	
	airportEntries.push_back ( Entry("BOUNDARY ARTCC NAME", 644, 30) );
	
	airportEntries.push_back ( Entry("RESPONSIBLE ARTCC IDENTIFIER", 674, 4) );
	
	airportEntries.push_back ( Entry("RESPONSIBLE ARTCC (FAA) COMPUTER IDENTIFIER", 678, 3) );
	
	airportEntries.push_back ( Entry("RESPONSIBLE ARTCC NAME", 681, 30) );
	
	airportEntries.push_back ( Entry("TIE-IN FSS PHYSICALLY LOCATED ON FACILITY", 711, 1) );
	
	airportEntries.push_back ( Entry("TIE-IN FLIGHT SERVICE STATION (FSS) IDENTIFIER", 712, 4) );
	
	airportEntries.push_back ( Entry("TIE-IN FSS NAME", 716, 30) );
	
	airportEntries.push_back ( Entry("LOCAL PHONE NUMBER FROM AIRPORT TO FSS", 746, 16) );
	
	airportEntries.push_back ( Entry("TOLL FREE PHONE NUMBER FROM AIRPORT TO FSS", 762, 16) );
	
	airportEntries.push_back ( Entry("ALTERNATE FSS IDENTIFIER", 778, 4) );
	
	airportEntries.push_back ( Entry("ALTERNATE FSS NAME", 782, 30) );
	
	airportEntries.push_back ( Entry("TOLL FREE PHONE NUMBER FROM AIRPORT TO ALTERNATE FSS", 812, 16) );
	
	airportEntries.push_back ( Entry("IDENTIFIER OF THE FACILITY RESPONSIBLE FOR ISSUING NOTICES TO AIRMEN", 828, 4) );
	
	airportEntries.push_back ( Entry("AVAILABILITY OF NOTAM 'D' SERVICE", 832, 1) );
	
	// ------------------------------
	
	airportEntries.push_back ( Entry("AIRPORT ACTIVATION DATE", 833, 7) );
	
	airportEntries.push_back ( Entry("AIRPORT STATUS CODE", 840, 2) );
	
	airportEntries.push_back ( Entry("AIRPORT ARFF CERTIFICATION TYPE AND DATE", 842, 15) );
	
	airportEntries.push_back ( Entry("NPIAS/FEDERAL AGREEMENTS CODE", 857, 7) );
	
	airportEntries.push_back ( Entry("AIRPORT AIRSPACE ANALYSIS DETERMINATION", 864, 13) );
	
	airportEntries.push_back ( Entry("INTERNATIONAL AIRPORT OF ENTRY FOR CUSTOMS", 877, 1) );
	
	airportEntries.push_back ( Entry("CUSTOMS LANDING RIGHTS AIRPORT", 878, 1) );
	
	airportEntries.push_back ( Entry("MILITARY/CIVIL JOINT USE AGREEMENT", 879, 1) );
	
	airportEntries.push_back ( Entry("AGREEMENT THAT GRANTS LANDING RIGHTS TO THE MILITARY", 880, 1) );
	
	// ------------------------------
		
	airportEntries.push_back ( Entry("AIRPORT INSPECTION METHOD", 881, 2) );
	
	airportEntries.push_back ( Entry("AGENCY/GROUP PERFORMING PHYSICAL INSPECTION", 883, 1) );
	
	airportEntries.push_back ( Entry("LAST PHYSICAL INSPECTION DATE", 884, 8) );
	
	airportEntries.push_back ( Entry("LAST DATE INFORMATION REQUEST WAS COMPLETED", 892, 8) );
	
	// ------------------------------
	
	airportEntries.push_back ( Entry("FUEL TYPES AVAILABLE", 900, 40) );
	
	airportEntries.push_back ( Entry("AIRFRAME REPAIR SERVICE AVAILABILITY", 940, 5) );
	
	airportEntries.push_back ( Entry("POWER PLANT (ENGINE) REPAIR AVAILABILITY", 945, 5) );
	
	airportEntries.push_back ( Entry("TYPE OF BOTTLED OXYGEN AVAILABLE", 950, 8) );
	
	// ------------------------------
	
	airportEntries.push_back ( Entry("AIRPORT LIGHTING SCHEDULE", 966, 7) );
	
	airportEntries.push_back ( Entry("BEACON LIGHTING SCHEDULE", 973, 7) );
	
	airportEntries.push_back ( Entry("AIR TRAFFIC CONTROL TOWER LOCATED ON AIRPORT", 980, 1) );
	
	airportEntries.push_back ( Entry("UNICOM FREQUENCY AVAILABLE AT THE AIRPORT", 981, 7) );
	
	airportEntries.push_back ( Entry("COMMON TRAFFIC ADVISORY FREQUENCY (CTAF)", 988, 7) );
	
	airportEntries.push_back ( Entry("SEGMENTED CIRCLE AIRPORT MARKER SYSTEM", 995, 4) );
	
	airportEntries.push_back ( Entry("LENS COLOR OF OPERABLE BEACON", 999, 3) );
	
	airportEntries.push_back ( Entry("LANDING FEE CHARGED TO NON-COMMERCIAL USERS", 1002, 1) );
	
	airportEntries.push_back ( Entry("LANDING FACILITY IS USED FOR MEDICAL PURPOSES", 1003, 1) );
	
	// ------------------------------
	
	airportEntries.push_back ( Entry("SINGLE ENGINE GENERAL AVIATION AIRCRAFT", 1004, 3) );
	
	airportEntries.push_back ( Entry("MULTI ENGINE GENERAL AVIATION AIRCRAFT", 1007, 3) );
	
	airportEntries.push_back ( Entry("JET ENGINE GENERAL AVIATION AIRCRAFT", 1010, 3) );
	
	airportEntries.push_back ( Entry("GENERAL AVIATION HELICOPTER", 1013, 3) );
	
	airportEntries.push_back ( Entry("OPERATIONAL GLIDERS", 1016, 3) );
	
	airportEntries.push_back ( Entry("OPERATIONAL MILITARY AIRCRAFT", 1019, 3) );
	
	airportEntries.push_back ( Entry("ULTRALIGHT AIRCRAFT", 1022, 3) );
	
	// ------------------------------
	
	airportEntries.push_back ( Entry("COMMERCIAL SERVICES", 1025, 6) );
	
	airportEntries.push_back ( Entry("COMMUTER SERVICES", 1031, 6) );
	
	airportEntries.push_back ( Entry("AIR TAXI", 1037, 6) );
	
	airportEntries.push_back ( Entry("GENERAL AVIATION LOCAL OPERATIONS", 1043, 6) );
	
	airportEntries.push_back ( Entry("GENERAL AVIATION ITINERANT OPERATIONS", 1049, 6) );
	
	airportEntries.push_back ( Entry("MILITARY AIRCRAFT OPERATIONS", 1055, 6) );
	
	airportEntries.push_back ( Entry("12-MONTH ENDING DATE ON WHICH ANNUAL OPERATIONS DATA IN ABOVE SIX FIELDS IS BASED", 1061, 10) );
	
	// ------------------------------
	
	airportEntries.push_back ( Entry("AIRPORT POSITION SOURCE", 1071, 16) );
	
	airportEntries.push_back ( Entry("AIRPORT POSITION SOURCE DATE", 1087, 10) );
	
	airportEntries.push_back ( Entry("AIRPORT ELEVATION SOURCE", 1097, 16) );
	
	airportEntries.push_back ( Entry("AIRPORT ELEVATION SOURCE DATE", 1113, 10) );
	
	airportEntries.push_back ( Entry("CONTRACT FUEL AVAILABLE", 1123, 1) );
	
	airportEntries.push_back ( Entry("TRANSIENT STORAGE FACILITIES", 1124, 12) );
	
	airportEntries.push_back ( Entry("OTHER AIRPORT SERVICES AVAILABLE", 1136, 71) );
	
	airportEntries.push_back ( Entry("WIND INDICATOR", 1207, 3) );
	
	airportEntries.push_back ( Entry("ICAO IDENTIFIER", 1210, 7) );
	
	airportEntries.push_back ( Entry("AIRPORT RECORD FILLER", 1217, 312) );
	
	// ------------------------------
}


void PrintAirport (const std::string input)
{
	std::cout << std::endl;
	
	for (auto it = airportEntries.begin(); it < airportEntries.end(); it++)
	{
		std::cout << it->identifier << std::endl << input.substr(it->startPosition, it->elementLength) << std::endl << std::endl;
	}
}

int main (int argc, char *argv[]) 
{
	LoadAptEntries ();
	
	std::ifstream infile ("APT-KSBA.txt");
	
	std::string line;
	
		std::getline (infile, line);
		
		std::istringstream iss (line);
		
		//std::cout << iss.str() << std::endl;
		
		PrintAirport (iss.str());
}
