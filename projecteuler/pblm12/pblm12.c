#include<stdio.h>
/***********************************************************************************************



***********************************************************************************************/
int number_of_divisors(int n)
{
    int counter,i;
    for(counter=0,i=1;(!(n%i) && (counter++)) || i<=(n/2);i++);
    return counter;
}

int main(){
	int i,num_divisors,max_num_div=0;
	long sum=3;

	for(i=3;;i++){
		sum+=i;
		num_divisors = number_of_divisors(sum);
		if(max_num_div < num_divisors){
			max_num_div = num_divisors;
		}

		if(i%500 == 0)
		printf("I:%d:Sum:%d:num_divisors:%d:Max_div:%d\n",i,sum ,num_divisors,max_num_div);
		
		if(num_divisors>500){
			break;
		}
	}
    printf("I:%d:Sum:%d:num_divisors:%d:Max_div:%d\n",i,sum ,num_divisors,max_num_div);
}
