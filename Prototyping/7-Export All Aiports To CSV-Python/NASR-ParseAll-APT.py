out_file = open("output-airports.txt", 'w')

airport_file = open('APT-Sample.txt', 'r')
text = airport_file.read()
lines = text.split("\n")

for line in lines:

	type = line[0:3]
		
	if (type == "APT"):
		airport = line[27:30]
		latitude = line[538:549]
		longitude = line[565:576]
		
		final_string = "%s: %sN, %sW\n" % (airport, latitude, longitude)
		
		print(final_string)
		out_file.write(final_string)
		
out_file.close()
