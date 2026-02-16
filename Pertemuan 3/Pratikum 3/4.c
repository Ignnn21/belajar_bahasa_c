#include <stdio.h>
int main(){
    // Deklarasikan variabel
    float a,b;
    int c;

    printf("Masukan angka pertama = ");
    scanf(" %f", &a);
    
    printf("Masukan angka kedua = ");
    scanf(" %f", &b);
    
    printf("=============\n");
    printf("Pilih Operasi =\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Masukan no    = ");
    scanf(" %d", &c);
    printf("=============\n");

    switch(c){
        case 1 : printf("Hasil dari %.1f + %.1f adalah %.1f",a,b,a+b); break;
        case 2 : printf("Hasil dari %.1f - %.1f adalah %.1f",a,b,a-b); break;
        case 3 : printf("Hasil dari %.1f * %.1f adalah %.1f",a,b,a*b); break;
        case 4 : 
                if (b == 0){
                 printf(" Hasil dari %.1f / %.1f adalah tidak terdefinisi",a,b); break; 
                }
                else{
                    printf("Hasil dari %.1f / %.1f adalah %.1f",a,b,a/b); break;
                }    
        default : printf("EROR");
    }

    return 0;
}