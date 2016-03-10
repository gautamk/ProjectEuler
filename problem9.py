import math


def is_pythagorean_triple(first, second, third):
    return math.pow(first, 2) + math.pow(second, 2) == math.pow(third, 2)


if __name__ == '__main__':
    for b in xrange(1, 1000):
        a = (500000 - 1000 * b) / (1000 - b)
        if a > 0:
            c = 1000 - (a + b)
            if is_pythagorean_triple(a, b, c):
                print a * b * c
