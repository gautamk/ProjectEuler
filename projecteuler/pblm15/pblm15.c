#include<stdio.h>
/***********************************************************************************************



***********************************************************************************************/
const int gridSize = 2;

// call with progress(0, 0)
int progress(int x, int y)
{
    int i = 0;

    if (x < gridSize)
        i += progress(x + 1, y);
    if (y < gridSize)
        i += progress(x, y + 1);

    if (x == gridSize && y == gridSize)
        return 1;

    return i;
}

int main(){

    printf(" %d\n ",progress(0,0));
}
