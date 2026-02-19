#include <stdio.h>
void x(){
    printf("Hello World");
}
float luas_persegi(float p, float l){
    float hasil;
    hasil = p*l;
    return hasil;
}
int main (){
    float p, l, luas;
    printf("Masukan panjang persegi : ");
    scanf("%f",&p);
    printf("Masukan lebar persegi : ");
    scanf("%f",&l);

    x();

    luas = luas_persegi(p, l);
    printf("\nLuas persegi : %.2f", luas);
    return 0;
}