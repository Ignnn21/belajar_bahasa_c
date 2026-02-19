#include <stdio.h>
int main(){
    int b1,b2;

    printf("Masukan bilangan bulat 1 = " );
    scanf(" %d", &b1);
    printf("Masukan bilangan bulat 2 = " );
    scanf(" %d", &b2);
    
    // 1 = benar, 0 = salah (biner)
    printf("Apakah bilangan %d > bilangan %d = %d\n", b1, b2, b1 > b2);
    printf("Apakah bilangan %d < bilangan %d = %d\n", b1, b2, b1 < b2);
    printf("Apakah bilangan %d == bilangan %d = %d\n", b1, b2, b1 == b2);
    printf("Apakah bilangan %d != bilangan %d = %d\n", b1, b2, b1 != b2);
    printf("Apakah bilangan %d >= bilangan %d = %d\n", b1, b2, b1 >= b2);
    printf("Apakah bilangan %d <= bilangan %d = %d\n", b1, b2, b1 <= b2);
    return 0;
}