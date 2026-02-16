#include <stdio.h>
int main(){
    float p,l,luas;
    
    printf("Masukan panjang sisi =" );
    scanf(" %f", &p);
    printf("Masukan lebar sisi =" );
    scanf(" %f", &l);

    luas = p*l;
    printf("Luas persgi panjang = %.2f", luas);
    
    return 0;
}