"""
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
"""

import math

seive = [False, False, True] + ([True] * int(2 * math.pow(10, 6)))

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
print sum(primes)
