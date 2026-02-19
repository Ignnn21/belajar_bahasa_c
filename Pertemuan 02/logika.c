#include <stdio.h>
int main(){
    int a,b;
    //  1 = true, 0 = false
    printf("Masukan bilangan a = " );
    scanf(" %d", &a);
    printf("Masukan bilangan b = " );
    scanf(" %d", &b);

    printf("%d && %d = %d\n", a,b,a && b);
    printf("%d || %d = %d\n", a,b,a || b);
    printf("!%d = %d\n", a,!a);
    printf("!%d = %d", b,!b);
    
    return 0;
}