#include <stdio.h>
#define ROW 5
#define COLUMN 5
int main() {
   int i,j,array[ROW][COLUMN];
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
