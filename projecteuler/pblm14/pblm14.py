#!/usr/bin/python
"""
The following iterative sequence is defined for the set of positive integers:

n  n/2 (n is even)
n  3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13  40  20  10  5  16  8  4  2  1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
"""


def sequence_generate(start):
    seq = []
    while True:
        seq.append(start)
        if start % 2 == 0:
            start /=2
        else:
            start = (3*start) + 1

        if start == 1:
            seq.append(start)
            break
        pass
    
    return seq


def main1():
    longest_sequence = [] 
    longest_sequence_number = 0
    i=1
    while i < 1000000:
        seq = sequence_generate(i)
        if seq.__len__() > longest_sequence.__len__():
            longest_sequence = seq;
            longest_sequence_number = i        
        i+=1
    
    print longest_sequence_number , ":" , longest_sequence

############# Method 2 
def main2():
    longest = 0
    terms = 0
    for i in range(1,1000001):
        j = i
        this_terms = 1
        while (j != 1) :
            this_terms+=1
            if (this_terms > terms):          
                terms = this_terms
                longest = i
            
            if (j % 2 == 0):
                j = j / 2   
            else:
                j = 3 * j + 1;


    print "longest: %d (%d)\n"%(longest, terms)


if __name__ == "__main__":
    main2()
        

     