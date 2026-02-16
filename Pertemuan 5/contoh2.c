#include <stdio.h>
int main(){
    int rows, cols;
    int count = 1;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of colomns: ");
    scanf("%d",&cols);

    int a[rows][cols];
    int i = 1;
    while (i<=rows){
    int j = 1;
        while(j<=cols){
        printf("%d\t",count);
        count++;
        j++;
        }
        i++;
        printf("\n");
    }

    return 0;
}