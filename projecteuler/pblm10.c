#include<stdio.h>
#include<stdlib.h>
#define CONTAINER_MAX 10000000
/***********************************************************************************************

Problem 10
08 February 2002

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

***********************************************************************************************/
char CONTAINER[CONTAINER_MAX];
void initialize(){
	long long i=0;
	for(;i<CONTAINER_MAX;i++){
		*(CONTAINER+i)=1;
	}
}
void generate(){
	long long i=2,j;
	for(;i<CONTAINER_MAX/2;i++){
		if( *(CONTAINER+i) == 1  ){
			for(j=2;j*i<CONTAINER_MAX;j++){
				*(CONTAINER+(i*j)) = 0;
			}
		}
	}
}

int main(){
	unsigned long i=1;
	long long sum=0;
	initialize();
	generate();
	while(++i <= 2000000){
		if(CONTAINER[i] == 1){
			
			sum+=i;
		}
	}
    printf("%u\n ",sum);
}
