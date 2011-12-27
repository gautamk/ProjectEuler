#include<stdio.h>
/**********************************************************************************************

Problem 5
30 November 2001

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

***********************************************************************************************/
int isDivisibleBy1To20(int number){
	int i=0;
	for(;i<=20;i++){
		if( number % i != 0 )
			return 0;
	}
	return 1;
}

int main(){
	int i=20;
	while(! isDivisibleBy1To20(++i) ){}
    printf(" %d \n ",i);
}
