#include<stdio.h>

/***********************************************************************************************



***********************************************************************************************/
 long long  LargestPrimeFactor(long long number) {
		long long n = number , i , Largestfactor = 1;
		for (i = 2; i <= (n / i); i++) {
			while (n % i == 0) {
				if(i>Largestfactor) Largestfactor = i;
				n /= i;
			}
		}
		if (n > Largestfactor ) 
			Largestfactor = n;
		
		return Largestfactor;
	}
int main (){
	printf(" %d \n",LargestPrimeFactor(600851475143));
}