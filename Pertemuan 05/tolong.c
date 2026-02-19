#include <stdio.h>
int main(){
    int i, j;
    char ch = 'A';

    i = 1;
    while(i<=3){
        j = 1;
        while(j<=i){
            printf("%d ",j);
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}