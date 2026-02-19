#include <stdio.h>
int main(){
    float alas, tinggi, luas;

    printf("Masukan panjang alas = " );
    scanf(" %f", &alas);
    printf("Masukan panjang tinggi = " );
    scanf(" %f", &tinggi);

    luas = alas*tinggi/2;
    printf("Luas segitiga = %.2f", luas);
    
    return 0;
}