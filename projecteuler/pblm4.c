#include<stdio.h>
/***********************************************************************************************

Problem 4
16 November 2001

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91  99.

Find the largest palindrome made from the product of two 3-digit numbers.

***********************************************************************************************/
int reverseNumber(int number){
	int reverse=0;
	while(number>0){
		reverse=reverse*10+(number%10);
		number/=10;
	}
	return reverse;
}
int isPalindrome(int number){
	return number == reverseNumber(number) ? 1 : 0 ;
}
int main(){
	int i,j,largestPalindrome = 0;
	for(i=100;i<=999;i++){
		for(j=100;j<=999;j++){
			if(isPalindrome( i*j )){
				largestPalindrome = largestPalindrome < (i*j) ? i*j : largestPalindrome;
			}
			if(i*j == 906609){
				printf("%dx%d\n",i,j);
			}
		}
	}
	printf("%d",largestPalindrome);
    printf(" \n ");
}
