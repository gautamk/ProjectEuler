#!/usr/bin/python
#


import time
start_time = time.time()
parsed_triangle = []
def parse():
	# Use input for problem 18 and triangle.txt for problem 67 . 
	# Both get solved by this algorithm
	file = open("triangle.txt")
	triangle = file.read()
	for row in triangle.split("\n"):
		parsed_row = []
		for num in row.split(" "):
			parsed_row.append(int(num))

		parsed_triangle.append(parsed_row)

def compute():
	parsed_triangle.reverse()
	for row in range(0,len(parsed_triangle) - 1 ):
		coll = 0
		for k in parsed_triangle[row+1]:
			parsed_triangle[row+1][coll] = max(
												k + parsed_triangle[row][coll],
												k + parsed_triangle[row][coll+1]
												)
			coll+=1
	
	print parsed_triangle[len(parsed_triangle)-1][0]

		 


def main():
	parse()
	compute()

	pass


if __name__ == "__main__":
    main()
    print time.time() - start_time
