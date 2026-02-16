#include <stdio.h>
int main(){
    int a,b;

    printf("Masukan bilangan bulat a = " );
    scanf(" %d", &a);
    printf("Masukan bilangan bulat b = " );
    scanf(" %d", &b);

    printf("%d & %d = %d\n", a,b,a & b);
    printf("%d | %d = %d\n", a,b,a | b);
    printf("%d ^ %d = %d\n", a,b,a ^ b);
    printf("~%d = %d\n", a, ~a);
    printf("~%d = %d\n", b, ~b);
    printf("%d << 1 = %d\n", a,a << 1);
    printf("%d >> 1 = %d\n", a,a >> 1);
    printf("%d << 1 = %d\n", b,b << 1);
    printf("%d >> 1 = %d\n", b,b >> 1);
    
    return 0;
}