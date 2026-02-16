#include <stdio.h>
#define COLUMNX 10
#define ROWMAX 10
int main(){
    int row = 1, column, y;
    printf("MULTIPLICATION TABLE\n");
    printf("===========================================\n");
    
    do
    {
        column=1;
        do
        {
            y = row*column;
            printf("%4d",y);
            column = column + 1;
        } while (column<=COLUMNX);
        printf("\n");
        row = row + 1;
        
    } while (row<=ROWMAX);
    printf("===========================================\n");
    return 0;
}