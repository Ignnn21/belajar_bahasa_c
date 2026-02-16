#include <stdio.h>
int main(){
    // Deklarasikan variabel
    int a;

    printf("Pilihan Menu =\n1. Nasi Goreng\n2. Mie Ayam\n3. Soto Ayam\n");
    printf("Pilihan = ");
    scanf(" %d", &a);

    switch(a){
        case 1 : printf("Anda memilih Nasi Goreng"); break;
        case 2 : printf("Anda memilih Mie Ayam"); break;
        case 3 : printf("Anda memilih Soto Ayam"); break;
        default : printf("Tidak beli");
    }

    return 0;
}