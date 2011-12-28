#!/usr/bin/python
"""
Problem 17
17 May 2002

If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?


NOTE: Do not count spaces or hyphens. 
For example, 342 (three hundred and forty-two) contains 23 letters 
and 115 (one hundred and fifteen) contains 20 letters.
The use of "and" when writing out numbers is in compliance with British usage.

"""

def get_numbered_digit(value , number):
	assert(number > 0)
	while True:
		if number == 1:
			return value % 10
		number-=1;
		value/=10;

def number_to_words(number):
	if number == 1:
		return "one"

	elif number == 2:
		return "two"

	elif number == 3:
		return "three"
	
	elif number == 4:
		return "four"
	
	elif number == 5:
		return "five"
	
	elif number == 6:
		return "six"
	
	elif number == 7:
		return "seven"

	elif number == 8:
		return "eight"

	elif number == 9:
		return "nine"

	elif number == 10:
		return "ten"
		
	elif number == 11:
		return "eleven"

	elif number == 12:
		return "twelve"

	elif number == 13:
		return "thirteen"

	elif number == 14:
		return "fourteen"

	elif number == 15:
		return "fifteen"

	elif number == 16:
		return "sixteen"

	elif number == 17:
		return "seventeen"

	elif number == 18:
		return "eighteen"

	elif number == 19:
		return "nineteen"

	elif number == 20:
		return "twenty"

	elif number == 30:
		return "thirty"

	elif number == 40:
		return "forty"

	elif number == 50:
		return "fifty"

	elif number == 60:
		return "sixty"

	elif number == 70:
		return "seventy"

	elif number == 80:
		return "eighty"

	elif number == 90:
		return "ninety"
	
	elif number > 20 and number < 100 and number % 10 != 0:
		# Get The 					Tens digit 							Units digit
		return   number_to_words( (number/10) * 10 ) + number_to_words(	number % 10 )
	
	elif number >= 100 and number < 1000 and number % 100 == 0:
		#Get the 			Hundreds Digit
		return number_to_words(number/100) + "hundred"

	elif number >= 100 and number < 1000 and number % 100 != 0:
		#Get the 				Hunderds Digit 							tens and Units digit
		return number_to_words(number/100) + "hundred" + "and" + number_to_words(number%100)

	elif number >= 1000 and number % 1000 == 0:
		#
		return number_to_words(number/1000) + "thousand"

if __name__ == "__main__":
	length = 0
	for i in range(1,1001):
		length+= number_to_words(i).__len__()
	print length
