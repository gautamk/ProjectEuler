#include<stdio.h>

/****************************************************************************************************************
Problem 1
05 October 2001

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
****************************************************************************************************************/

int main(){
    unsigned int ctr = 0 , sum = 0;
    while(++ctr<1000){
        if( (ctr%3 == 0) || (ctr%5==0) ){
            sum+=ctr;
        }
    }
    printf("%d\n",sum);
}
