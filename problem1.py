# If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

# Find the sum of all the multiples of 3 or 5 below 1000.

MAX = 1000


def mul_of(multiple_of, max=MAX):
    multiplier = 1
    multiple = multiple_of * multiplier
    while multiple < MAX:
        yield multiple
        multiple = multiple_of * multiplier
        multiplier += 1


multiples_of_3_or_5 = set(mul_of(3)).union(mul_of(5))
print multiples_of_3_or_5
print sum(multiples_of_3_or_5)
