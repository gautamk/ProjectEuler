#!/usr/bin/python
"""
By starting at the top of the triangle below and moving to adjacent numbers on the row below, the maximum total from top to bottom is 23.

3
7 4
2 4 6
8 5 9 3

That is, 3 + 7 + 4 + 9 = 23.

Find the maximum total from top to bottom of the triangle below:
"""
triangle = """75
95 64
17 47 82
18 35 87 10
20 04 82 47 65
19 01 23 75 03 34
88 02 77 73 07 63 67
99 65 04 28 06 16 70 92
41 41 26 56 83 40 80 70 33
41 48 72 33 47 32 37 16 94 29
53 71 44 65 25 43 91 52 97 51 14
70 11 33 28 77 73 17 78 39 68 17 57
91 71 52 38 17 14 91 43 58 50 27 29 48
63 66 04 68 89 53 67 30 73 16 69 87 40 31
04 62 98 27 23 09 70 98 73 93 38 53 60 04 23"""

def parse_triangle():
    parsed_triangle = []
    for row in triangle.split("\n"):
        split_row = row.split(" ")
        parsed_row = []
        
        for num in split_row:
            parsed_row.append( int(num) )
        
        parsed_triangle.append(parsed_row)

    return parsed_triangle
parsed_triangle = parse_triangle()

##########################################
######### Algorithms #####################
##########################################
def find_greatest_num_and_index(array):
    greatest_index = 0
    greatest = 0
    for i in range(array.__len__()):
        if array[i] > greatest:
            greatest = array[i]
            greatest_index = i
    return [greatest_index , greatest]
    

# Bottom up search 
# greedy Algorithm 
# Does not work
def bottom_up():
    current_row = parsed_triangle.__len__() -1
    current_index = 7 #find_greatest_num_and_index(parsed_triangle[current_row])[0]
    sum = 0
    path = []
    while(current_row>=0):
        try:
            sum+=parsed_triangle[current_row][current_index]
            path.append(parsed_triangle[current_row][current_index])
        except IndexError as e :
            if current_row == 0 :
                current_index = 0
                continue
            else:
                print e ," Row:",current_row," Index:" ,  current_index

        current_row-=1
        try :
            if(parsed_triangle[current_row][current_index] < 
                                    parsed_triangle[current_row][current_index - 1]):
                current_index -= 1
        except IndexError as e:
            print e ," Row:",current_row," Index:" ,  current_index
            pass

    return [sum , path]
        
# Some Strange approach , Works
def upside_down():
    parsed_triangle.reverse()
    for i in range(0 , len(parsed_triangle) - 1):
        j=0
        for k in parsed_triangle[i+1]:
            parsed_triangle[i+1][j] = max(k + parsed_triangle[i][j] , k + parsed_triangle [i][j+1] )
            j+=1
    print "Result:", parsed_triangle[ len(parsed_triangle) - 1 ][0]
    return parsed_triangle

if __name__ == "__main__":
    pass