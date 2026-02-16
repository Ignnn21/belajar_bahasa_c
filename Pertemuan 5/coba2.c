#include <stdio.h>
int main(){
    int a, b, spasi;
    for(a=1;a<=5;a++){ // Baris
        for(b=1;b<=a;b++){ // Kolom
            printf(" %d x %d = %d |",b,a,a*b);
        }
        printf("\n");
    }

    for(a=5;a>=1;a--){ // Baris
        for(b=1;b<=a;b++){ // Kolom
            printf(" %d x %d = %d |",b,a,a*b);
        }
        printf("\n");
    }

    printf("\n");

    for(a=1;a<=5;a++){
        for(spasi=1;spasi<=a-5;a++){
            printf(" ");
        }
        for (b = 1; b <= 2 * a - 1; b++) {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}