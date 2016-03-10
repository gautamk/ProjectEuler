import math

MAX = 100
sum_of_square = sum((x * x for x in xrange(1, MAX + 1)))
square_of_sum = math.pow(sum((x for x in xrange(1, MAX + 1))), 2)
print square_of_sum - sum_of_square
