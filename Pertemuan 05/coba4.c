#include <stdio.h>
int main(){
    int a = 1, b;
    do{
        b = 1;
        do{
            printf("*");
            b++;
        }
        while(b<=a);
        printf("\n");
        a++;
    }
    while(a<=5);
    return 0;
}