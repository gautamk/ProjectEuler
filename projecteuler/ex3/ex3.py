def primeFactors(num):
        n=num
        factors = 1
        i=2
        while( i<= (n/i) ):
                while( n%i == 0 ):
                        if(i>factors):
                                factors = i
                        n /= i
                i += 1
        if n > factors:
                factors = n
        return factors

print primeFactors(600851475143)
                
