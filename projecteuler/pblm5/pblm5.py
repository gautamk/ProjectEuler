#!/usr/bin/python
#
# Problem 5
# 30 November 2001
#
# 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
#
# What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


def isDivisibleBy1To20(number):
	for i in range(1,21):
		if (number % i ) != 0  :
			#print number , "is not divisible by " , i
			return False
	return True

ctr = 20
while(not isDivisibleBy1To20(ctr) ):
	ctr+=20
	if ctr % 100000000 == 0 :
		print ctr
print ctr

    
