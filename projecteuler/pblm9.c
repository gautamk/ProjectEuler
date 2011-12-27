#include<stdio.h>
/***********************************************************************************************

A Pythagorean triplet is a set of three natural numbers, a  b  c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

***********************************************************************************************/

int sq(int num){
	return num*num;
}

int isPythagoreanTriplet(int a , int b , int c){
	if( sq(a)+sq(b) == sq(c) )
		return 1;
	return 0;
}


int main(){
	int i,j,k,sum;
	for(i=1;i<1000;i++){
		for(j=i+1;j<1000;j++){
			for(k=j+1;k<1000;k++){
				if(isPythagoreanTriplet(i,j,k) == 1){
					if( i+j+k == 1000 ){
						printf("%d^2 + %d^2 = %d^2 , abc = %d",i,j,k,i*j*k);
					}
				}
			}
		}
	}
    printf(" \n ");
}
