# nasr-data-parsing
Scripts to parse National Airspace Systems Resources data from the FAA

![](http://prefrontal.org/github/AirportData2.png)

Let's say, hypothetically, you want to get the latitude and longitude of every airport in the US.  Where would you go?  Well, there are several open data projects, such as http://openflights.org and http://ourairports.com.  However, the FAA itself produces detailed, up-to-date information through the National Flight Data Center (NFDC; https://nfdc.faa.gov).  Why not use that?

The National Airspace Systems Resources (NASR) data are updated every 56 days.  The data are available in the Aeronautical Information Exchange Model (AIXM) file format and also in the legacy CSV format.  These scripts are intended to be used with the CSV data.

The following data are available in the CSV format as of September, 2015:

* Airports and Other Landing Facilities (APT)
* ARTCC Boundary Descriptions (ARB)
* ARTCC Facilities (AFF)
* ASOS/AWOS (AWOS)
* ATC Tower and Satellite Airport Communications (TWR)
* ATS Non-Regulatory Airways (ATS)
* Coded Departure Routes (CDRs) (CDR)
* Country Codes
* Enroute National Fix Program Significant Points (NATFIX)
* Fix/Reporting Point/Waypoint (FIX)
* Flight Service Station Communications Facilities (COM)
* Flight Service Stations (FSS)
* High Altitude Redesign (HAR) Significant Points (HARFIX)
* Holding Patterns (HPF)
* Instrument Landing Systems (ILS/MLS) (ILS)
* Location Identifiers (LID)
* Military Training Routes (MTR)
* Navigation Aids (NAV)
* Parachute Jump Area (PJA)
* Preferred Route / Tower Enroute Control (TEC) Routes (PFR)
* Regulatory Airways (AWY)
* Standard Terminal Arrival / Standard Instrument Departure (Complete Set) (STARDP)
* State Codes
* Standard Terminal Arrival / Standard Instrument Departures (AFSS Subset) (SSD)
* Weather Reporting Locations (WXL)

The end goal will be to support parsing a number of these files to build up a local database of features for the Vox1090 application (https://github.com/prefrontal/Vox1090).
