#!/usr/bin/python
"""
Problem 16
03 May 2002

215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 21000?

"""


def sum_of_digits(num):
	sum=0
	while(num>0):
		sum+=(num % 10)
		num/=10
	return sum




if __name__ == "__main__":

	print sum_of_digits(2**1000)
    
