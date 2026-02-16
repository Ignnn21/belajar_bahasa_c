#include<stdio.h>
int main (){
    {
    const int a = 5;
    int b = 7;
    b++;
    printf("Hasil a = %d\nHasil b = %d\n",a,b);
    }
    {
    printf("Atau\n");
    int a = 5;
    int b = 7;
    a++;
    b++;
    printf("Hasil a = %d\nHasil b = %d",a,b);
    }
    return 0;
} 