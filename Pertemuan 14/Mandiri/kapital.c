#include <stdio.h>
#include <string.h>

int main (){
    char nama[100];
    printf("Masukkan nama anda : ");
    scanf(" %[^\n]",nama);

    strupr(nama);
    printf("Kapital : %s\n",nama);

    strlwr(nama);
    printf("Kecil   : %s\n",nama);
    return 0;
}