#include <stdio.h>
int main(){
    int a,b ,reset;

    printf("Masukan bilangan bulat a = " );
    scanf(" %d", &a);
    printf("Masukan bilangan bulat b = " );
    scanf(" %d", &b);
    reset = a;
    a += b;
    printf("Hasil %d += %d adalah %d\n", reset,b,a);
    a = reset;
    a -= b;
    printf("Hasil %d -= %d adalah %d\n", reset,b,a);
    a = reset;
    a *= b;
    printf("Hasil %d *= %d adalah %d\n", reset,b,a);
    a = reset;
    a /= b;
    printf("Hasil %d /= %d adalah %d\n", reset,b,a);
    a = reset;
    a %= b;
    printf("Hasil %d %%= %d adalah %d\n", reset,b,a);
    a = reset;
    a <<= b;
    printf("Hasil %d <<= %d adalah %d\n", reset,b,a);
    a = reset;
    a >>= b;
    printf("Hasil %d >>= %d adalah %d\n", reset,b,a);
    a = reset;
    a &= b;
    printf("Hasil %d &= %d adalah %d\n",reset,b,a);
    a = reset;
    a |= b;
    printf("Hasil %d |= %d adalah %d\n", reset,b,a);
    a = reset;
    a ^= b;
    printf("Hasil %d ^= %d adalah %d", reset,b,a);
    return 0;
}