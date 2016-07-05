class Entry:
	def __init__(self, identifier, start, length):
		self._identifier = identifier
		self._start = start
		self._length = length


def LoadAptEntries():
	airportEntries = []
	
	# --- Landing Facility Data ----------------
	
	airportEntries.append(Entry("RECORD TYPE INDICATOR", 0, 3))
	
	airportEntries.append(Entry("LANDING FACILITY SITE NUMBER", 3, 11))

	airportEntries.append(Entry("LANDING FACILITY TYPE", 14, 13))
	
	airportEntries.append(Entry("LOCATION IDENTIFIER", 27, 4))
	
	airportEntries.append(Entry("INFORMATION EFFECTIVE DATE", 31, 10))

	# --- Demographic Data ----------------------

	airportEntries.append(Entry("FAA REGION CODE", 41, 3))
	
	airportEntries.append(Entry("FAA DISTRICT OR FIELD OFFICE CODE", 44, 4))
	
	airportEntries.append(Entry("ASSOCIATED STATE POST OFFICE CODE", 48, 2))
	
	airportEntries.append(Entry("ASSOCIATED STATE NAME", 50, 20))
	
	airportEntries.append(Entry("ASSOCIATED COUNTY (OR PARISH) NAME", 70, 21))

	airportEntries.append(Entry("ASSOCIATED COUNTY'S STATE", 91, 2))
	
	airportEntries.append(Entry("ASSOCIATED CITY NAME", 93, 40))
	
	airportEntries.append(Entry("OFFICIAL FACILITY NAME", 133, 50))
	
	# --- Ownership Data ------------------------
	
	airportEntries.append(Entry("AIRPORT OWNERSHIP TYPE", 183, 2))
	
	airportEntries.append(Entry("FACILITY USE", 185, 2))
	
	airportEntries.append(Entry("FACILITY OWNER'S NAME", 187, 35))
	
	airportEntries.append(Entry("OWNER'S ADDRESS", 222, 72))
		
	airportEntries.append(Entry("OWNER'S CITY, STATE AND ZIP CODE", 294, 45))

	airportEntries.append(Entry("OWNER'S PHONE NUMBER", 339, 16))

	airportEntries.append(Entry("FACILITY MANAGER'S NAME", 355, 35))

	airportEntries.append(Entry("MANAGER'S ADDRESS", 390, 72))

	airportEntries.append(Entry("MANAGER'S CITY, STATE AND ZIP CODE", 462, 45))

	airportEntries.append(Entry("MANAGER'S PHONE NUMBER", 507, 16))
	
	# --- Geographic Data ---------------------------
	
	airportEntries.append(Entry("AIRPORT REFERENCE POINT LATITUDE (FORMATTED)", 523, 15))
	
	airportEntries.append(Entry("AIRPORT REFERENCE POINT LATITUDE (SECONDS)", 538, 12))
	
	airportEntries.append(Entry("AIRPORT REFERENCE POINT LONGITUDE (FORMATTED)", 550, 15))
	
	airportEntries.append(Entry("AIRPORT REFERENCE POINT LONGITUDE (SECONDS)", 565, 12))
	
	airportEntries.append(Entry("AIRPORT REFERENCE POINT DETERMINATION METHOD", 577, 1))
	
	airportEntries.append(Entry("AIRPORT ELEVATION", 578, 7))
	
	airportEntries.append(Entry("AIRPORT ELEVATION DETERMINATION METHOD", 585, 1))
	
	airportEntries.append(Entry("MAGNETIC VARIATION AND DIRECTION", 586, 3))
	
	airportEntries.append(Entry("MAGNETIC VARIATION EPOCH YEAR", 589, 4))
	
	airportEntries.append(Entry("TRAFFIC PATTERN ALTITUDE", 593, 4))
	
	airportEntries.append(Entry("AERONAUTICAL SECTIONAL CHART", 597, 30))
	
	airportEntries.append(Entry("DISTANCE FROM CENTRAL BUSINESS DISTRICT", 627, 2))
	
	airportEntries.append(Entry("DIRECTION OF AIRPORT FROM CENTRAL BUSINESS DISTRICT", 629, 3))
	
	airportEntries.append(Entry("LAND AREA COVERED BY AIRPORT", 632, 5))
	
	# ------------------------------
	
	airportEntries.append(Entry("BOUNDARY ARTCC IDENTIFIER", 637, 4))
	
	airportEntries.append(Entry("BOUNDARY ARTCC (FAA) COMPUTER IDENTIFIER", 641, 3))
	
	airportEntries.append(Entry("BOUNDARY ARTCC NAME", 644, 30))
	
	airportEntries.append(Entry("RESPONSIBLE ARTCC IDENTIFIER", 674, 4))
	
	airportEntries.append(Entry("RESPONSIBLE ARTCC (FAA) COMPUTER IDENTIFIER", 678, 3))
	
	airportEntries.append(Entry("RESPONSIBLE ARTCC NAME", 681, 30))
	
	airportEntries.append(Entry("TIE-IN FSS PHYSICALLY LOCATED ON FACILITY", 711, 1))
	
	airportEntries.append(Entry("TIE-IN FLIGHT SERVICE STATION (FSS) IDENTIFIER", 712, 4))
	
	airportEntries.append(Entry("TIE-IN FSS NAME", 716, 30))
	
	airportEntries.append(Entry("LOCAL PHONE NUMBER FROM AIRPORT TO FSS", 746, 16))
	
	airportEntries.append(Entry("TOLL FREE PHONE NUMBER FROM AIRPORT TO FSS", 762, 16))
	
	airportEntries.append(Entry("ALTERNATE FSS IDENTIFIER", 778, 4))
	
	airportEntries.append(Entry("ALTERNATE FSS NAME", 782, 30))
	
	airportEntries.append(Entry("TOLL FREE PHONE NUMBER FROM AIRPORT TO ALTERNATE FSS", 812, 16))
	
	airportEntries.append(Entry("IDENTIFIER OF THE FACILITY RESPONSIBLE FOR ISSUING NOTICES TO AIRMEN", 828, 4))
	
	airportEntries.append(Entry("AVAILABILITY OF NOTAM 'D' SERVICE", 832, 1))
	
	# ------------------------------
	
	airportEntries.append(Entry("AIRPORT ACTIVATION DATE", 833, 7))
	
	airportEntries.append(Entry("AIRPORT STATUS CODE", 840, 2))
	
	airportEntries.append(Entry("AIRPORT ARFF CERTIFICATION TYPE AND DATE", 842, 15))
	
	airportEntries.append(Entry("NPIAS/FEDERAL AGREEMENTS CODE", 857, 7))
	
	airportEntries.append(Entry("AIRPORT AIRSPACE ANALYSIS DETERMINATION", 864, 13))
	
	airportEntries.append(Entry("INTERNATIONAL AIRPORT OF ENTRY FOR CUSTOMS", 877, 1))
	
	airportEntries.append(Entry("CUSTOMS LANDING RIGHTS AIRPORT", 878, 1))
	
	airportEntries.append(Entry("MILITARY/CIVIL JOINT USE AGREEMENT", 879, 1))
	
	airportEntries.append(Entry("AGREEMENT THAT GRANTS LANDING RIGHTS TO THE MILITARY", 880, 1))
	
	# ------------------------------
		
	airportEntries.append(Entry("AIRPORT INSPECTION METHOD", 881, 2))
	
	airportEntries.append(Entry("AGENCY/GROUP PERFORMING PHYSICAL INSPECTION", 883, 1))
	
	airportEntries.append(Entry("LAST PHYSICAL INSPECTION DATE", 884, 8))
	
	airportEntries.append(Entry("LAST DATE INFORMATION REQUEST WAS COMPLETED", 892, 8))
	
	# ------------------------------
	
	airportEntries.append(Entry("FUEL TYPES AVAILABLE", 900, 40))
	
	airportEntries.append(Entry("AIRFRAME REPAIR SERVICE AVAILABILITY", 940, 5))
	
	airportEntries.append(Entry("POWER PLANT (ENGINE) REPAIR AVAILABILITY", 945, 5))
	
	airportEntries.append(Entry("TYPE OF BOTTLED OXYGEN AVAILABLE", 950, 8))
	
	# ------------------------------
	
	airportEntries.append(Entry("AIRPORT LIGHTING SCHEDULE", 966, 7))
	
	airportEntries.append(Entry("BEACON LIGHTING SCHEDULE", 973, 7))
	
	airportEntries.append(Entry("AIR TRAFFIC CONTROL TOWER LOCATED ON AIRPORT", 980, 1))
	
	airportEntries.append(Entry("UNICOM FREQUENCY AVAILABLE AT THE AIRPORT", 981, 7))
	
	airportEntries.append(Entry("COMMON TRAFFIC ADVISORY FREQUENCY (CTAF)", 988, 7))
	
	airportEntries.append(Entry("SEGMENTED CIRCLE AIRPORT MARKER SYSTEM", 995, 4))
	
	airportEntries.append(Entry("LENS COLOR OF OPERABLE BEACON", 999, 3))
	
	airportEntries.append(Entry("LANDING FEE CHARGED TO NON-COMMERCIAL USERS", 1002, 1))
	
	airportEntries.append(Entry("LANDING FACILITY IS USED FOR MEDICAL PURPOSES", 1003, 1))
	
	# ------------------------------
	
	airportEntries.append(Entry("SINGLE ENGINE GENERAL AVIATION AIRCRAFT", 1004, 3))
	
	airportEntries.append(Entry("MULTI ENGINE GENERAL AVIATION AIRCRAFT", 1007, 3))
	
	airportEntries.append(Entry("JET ENGINE GENERAL AVIATION AIRCRAFT", 1010, 3))
	
	airportEntries.append(Entry("GENERAL AVIATION HELICOPTER", 1013, 3))
	
	airportEntries.append(Entry("OPERATIONAL GLIDERS", 1016, 3))
	
	airportEntries.append(Entry("OPERATIONAL MILITARY AIRCRAFT", 1019, 3))
	
	airportEntries.append(Entry("ULTRALIGHT AIRCRAFT", 1022, 3))
	
	# ------------------------------
	
	airportEntries.append(Entry("COMMERCIAL SERVICES", 1025, 6))
	
	airportEntries.append(Entry("COMMUTER SERVICES", 1031, 6))
	
	airportEntries.append(Entry("AIR TAXI", 1037, 6))
	
	airportEntries.append(Entry("GENERAL AVIATION LOCAL OPERATIONS", 1043, 6))
	
	airportEntries.append(Entry("GENERAL AVIATION ITINERANT OPERATIONS", 1049, 6))
	
	airportEntries.append(Entry("MILITARY AIRCRAFT OPERATIONS", 1055, 6))
	
	airportEntries.append(Entry("12-MONTH ENDING DATE ON WHICH ANNUAL OPERATIONS DATA IN ABOVE SIX FIELDS IS BASED", 1061, 10))
	
	# ------------------------------
	
	airportEntries.append(Entry("AIRPORT POSITION SOURCE", 1071, 16))
	
	airportEntries.append(Entry("AIRPORT POSITION SOURCE DATE", 1087, 10))
	
	airportEntries.append(Entry("AIRPORT ELEVATION SOURCE", 1097, 16))
	
	airportEntries.append(Entry("AIRPORT ELEVATION SOURCE DATE", 1113, 10))
	
	airportEntries.append(Entry("CONTRACT FUEL AVAILABLE", 1123, 1))
	
	airportEntries.append(Entry("TRANSIENT STORAGE FACILITIES", 1124, 12))
	
	airportEntries.append(Entry("OTHER AIRPORT SERVICES AVAILABLE", 1136, 71))
	
	airportEntries.append(Entry("WIND INDICATOR", 1207, 3))
	
	airportEntries.append(Entry("ICAO IDENTIFIER", 1210, 7))
	
	airportEntries.append(Entry("AIRPORT RECORD FILLER", 1217, 312))
	
	return airportEntries
	
	
def PrintAirport(input, entries):
	for it in entries:
		print(it._identifier, ":", input[it._start: it._start + it._length], "\n")


# ----------------------------------------------------

entries = LoadAptEntries()

airport_file = open('APT-KSBA.txt', 'r')
text = airport_file.read()

PrintAirport (text, entries)
