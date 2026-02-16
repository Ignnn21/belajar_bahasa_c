#include <stdio.h>
#include "second.c"

int main(){
    int a,b, pilihan;
    float hasil;

    printf("=====PROGRAM ARITMATIKA SEDERHANA=====\n");
    printf("Masukkan bilangan pertama : ");
    scanf("%d",&a);
    printf("Masukkan bilangan kedua : ");
    scanf("%d",&b);

    printf("\nPilih Operasi\n");
    printf("1. Penjumlahan (+)\n");
    printf("2. Pengurangan (-)\n");
    printf("3. Perkalian (*)\n");
    printf("4. Pembagian (/)\n");
    printf("Masukkan pilihan anda : ");
    scanf("%d",&pilihan);

    switch (pilihan)
    {
    case 1:
        printf("Hasil dari %d + %d = %d\n",a,b, tambah(a,b));
        break;
    case 2:
        printf("Hasil dari %d - %d = %d\n",a,b, kurang(a,b));
        break;
    case 3:
        printf("Hasil dari %d * %d = %d\n",a,b, perkalian(a,b));
        break;
    case 4:
        hasil = pembagian(a,b);
    if(b!=0){
        printf("Hasil dari %d / %d = %.2f\n",a,b, pembagian(a,b));
        }
        break;
    
    default:
        printf("TOLOL");
        break;
    }
    return 0;
}