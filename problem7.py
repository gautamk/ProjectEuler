# By listing the first six prime nubers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
# What is the 10 001st prime number

import math

seive = [False, False, True] + ([True] * int(math.pow(10, 6)))

for i, s in enumerate(seive):
    if s:
        multiplier = 2
        try:
            while True:
                seive[i * multiplier] = False
                multiplier += 1
        except IndexError:
            continue

primes = []
for i, is_prime in enumerate(seive):
    if is_prime:
        primes.append(i)

print primes[10000]
