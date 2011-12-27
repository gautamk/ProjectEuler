#include<stdio.h>
#include<stdlib.h>
#define CONTAINER_MAX 10000000
/***********************************************************************************************



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
long long find(int count){
	long long i;
	int current=0;
	for(i=2;i<CONTAINER_MAX;i++){
		if( *(CONTAINER+i) == 1  ){
			current++;
		}
		if(current==count)
			return i;
	}
}
int main(){
	initialize();
	generate();
	
    printf(" %d\n ",find(10001));
}
