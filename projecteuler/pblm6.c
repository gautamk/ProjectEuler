#include<stdio.h>
/***********************************************************************************************



***********************************************************************************************/

long long sumOfSquares(long long number){
	long long ctr = 0,sum=0;
	while(++ctr<=number){
		sum+= (ctr*ctr);
	}
	return sum;
}
long long squareOfSum(long long number){
	long long ctr = 0, sum=0;
	while(++ctr<=number){
		sum+=ctr;
	}
	return sum*sum;
}
int main(){

    printf(" %d \n",squareOfSum(100) -sumOfSquares(100) );
}
