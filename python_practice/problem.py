#problem: recieve miles and covert to km
#km = miles * 1.60934
#Enter miles 5
#5miles equals 8.04 km

#Ask the user to input miles and assign it to the miles variable
miles = input('Enter Miles ')

#Convert from string to integer
miles = int(miles)

#perform calc. by multiplying 1.60934 times miles
kilometre = miles * 1.60934

#print results using format()
print('{} miles equals {} kilometre'.format(miles, kilometre))
