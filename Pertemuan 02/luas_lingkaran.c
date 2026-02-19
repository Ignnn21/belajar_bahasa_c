#include <stdio.h>
int main(){
    float r;
    float pi = 22.00/7.00,luas;

    printf("Masukan panjang r = " );
    scanf(" %f", &r);
   

    luas = pi*r*r;
    printf("Luas lingkaran = %.1f", luas);
    
    return 0;
}