#include<stdio.h>
#include<stdlib.h>

/***********************************************************************************************
Problem 11
22 February 2002

In the 2020 grid below, four numbers along a diagonal line have been marked in red.

   C   0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 
R
0     08 02 22 97 38 15 00 40 00 75 04 05 07 78 52 12 50 77 91 08
1     49 49 99 40 17 81 18 57 60 87 17 40 98 43 69 48 04 56 62 00
2     81 49 31 73 55 79 14 29 93 71 40 67 53 88 30 03 49 13 36 65
3     52 70 95 23 04 60 11 42 69 24 68 56 01 32 56 71 37 02 36 91
4     22 31 16 71 51 67 63 89 41 92 36 54 22 40 40 28 66 33 13 80
5     24 47 32 60 99 03 45 02 44 75 33 53 78 36 84 20 35 17 12 50
6     32 98 81 28 64 23 67 10 26 38 40 67 59 54 70 66 18 38 64 70
7     67 26 20 68 02 62 12 20 95 63 94 39 63 08 40 91 66 49 94 21
8     24 55 58 05 66 73 99 26 97 17 78 78 96 83 14 88 34 89 63 72
9     21 36 23 09 75 00 76 44 20 45 35 14 00 61 33 97 34 31 33 95
10    78 17 53 28 22 75 31 67 15 94 03 80 04 62 16 14 09 53 56 92
11    16 39 05 42 96 35 31 47 55 58 88 24 00 17 54 24 36 29 85 57
12    86 56 00 48 35 71 89 07 05 44 44 37 44 60 21 58 51 54 17 58
13    19 80 81 68 05 94 47 69 28 73 92 13 86 52 17 77 04 89 55 40
14    04 52 08 83 97 35 99 16 07 97 57 32 16 26 26 79 33 27 98 66
15    88 36 68 87 57 62 20 72 03 46 33 67 46 55 12 32 63 93 53 69
16    04 42 16 73 38 25 39 11 24 94 72 18 08 46 29 32 40 62 76 36
17    20 69 36 41 72 30 23 88 34 62 99 69 82 67 59 85 74 04 36 16
18    20 73 35 29 78 31 90 01 74 31 49 71 48 86 81 16 23 57 05 54
19    01 70 54 71 83 51 54 69 16 92 33 48 61 43 52 01 89 19 67 48

The product of these numbers is 26  63  78  14 = 1788696.

What is the greatest product of four adjacent numbers in any direction (up, down, left, right, or diagonally) in the 2020 grid?


***********************************************************************************************/
int ARRAY[20][20] = {
{8,02,22,97,38,15,00,40,00,75,04,05,07,78,52,12,50,77,91,8},
{49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,04,56,62,0},
{81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,03,49,13,36,65},
{52,70,95,23,04,60,11,42,69,24,68,56,01,32,56,71,37,02,36,91},
{22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80},
{24,47,32,60,99,03,45,02,44,75,33,53,78,36,84,20,35,17,12,50},
{32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70},
{67,26,20,68,02,62,12,20,95,63,94,39,63,8,40,91,66,49,94,21},
{24,55,58,5,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72},
{21,36,23,9,75,00,76,44,20,45,35,14,00,61,33,97,34,31,33,95},
{78,17,53,28,22,75,31,67,15,94,3,80,4,62,16,14,9,53,56,92},
{16,39,05,42,96,35,31,47,55,58,88,24,0,17,54,24,36,29,85,57},
{86,56,00,48,35,71,89,7,05,44,44,37,44,60,21,58,51,54,17,58},
{19,80,81,68,05,94,47,69,28,73,92,13,86,52,17,77,04,89,55,40},
{4,52,8,83,97,35,99,16,7,97,57,32,16,26,26,79,33,27,98,66},
{88,36,68,87,57,62,20,72,03,46,33,67,46,55,12,32,63,93,53,69},
{4,42,16,73,38,25,39,11,24,94,72,18,8,46,29,32,40,62,76,36},
{20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,04,36,16},
{20,73,35,29,78,31,90,01,74,31,49,71,48,86,81,16,23,57,05,54},
{01,70,54,71,83,51,54,69,16,92,33,48,61,43,52,01,89,19,67,48}
};
struct largest_product{
    unsigned int value;
    char r1,r2,r3,r4;
    char c1,c2,c3,c4;
}PRODUCT;



/*
    Relative position definition for relative_get function
*/
#define TOP_LEFT        100
#define TOP             101
#define TOP_RIGHT       102
#define LEFT            0
#define RIGHT           2
#define BOTTOM_LEFT     -100
#define BOTTOM          -101
#define BOTTOM_RIGHT    -102
#define INVALID_POSITION -1

int relative_get(int r,int c,int relation){
    // r = row
    // c = collumn

    //Erronous input
    if( (r >= 20 || c >= 20) || (r < 0 || c < 0) ){
        return  INVALID_POSITION;
    }

    switch(relation){

        // row and collumn have to be atleast 1 to get top_left
        case TOP_LEFT       :return (r < 1 || c < 1)    ? INVALID_POSITION : ARRAY[r-1][c-1];

        // row has to be atleast 1 to go top right
        case TOP_RIGHT      :return (r<1 || c>=19 )     ? INVALID_POSITION : ARRAY[r-1][c+1];

        // row has to be atleast 1
        case TOP            :return (r<1)               ? INVALID_POSITION : ARRAY[r-1][c];

        // collumn has to be atleast 1
        case LEFT           :return (c<1)               ? INVALID_POSITION : ARRAY[r][c-1];
        
        // collumn should not be greater than 18
        case RIGHT          :return (c>=19)             ? INVALID_POSITION : ARRAY[r][c+1];

        // Row cannot be > 18 and collumn cannot be < 1
        case BOTTOM_LEFT    :return (r >= 19 || c<1 )   ? INVALID_POSITION : ARRAY[r+1][c-1];

        // Row and Collumn cannot be > 18
        case BOTTOM_RIGHT   :return (r >=19 || c>=19)   ? INVALID_POSITION : ARRAY[r+1][c+1];

        //Row Cannot be > 18
        case BOTTOM         :return (r>=19)             ? INVALID_POSITION : ARRAY[r+1][c];

        // Invalid position relation
        default             :return INVALID_POSITION; 
    }
}

int main(){
    int i,j;
    PRODUCT.value=
    PRODUCT.r1=PRODUCT.r2=PRODUCT.r3=PRODUCT.r4=
    PRODUCT.c1=PRODUCT.c2=PRODUCT.c3=PRODUCT.c4= 0;
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            printf("%2d ",ARRAY[i][j]);
        }
        printf("\n");
    }
}
