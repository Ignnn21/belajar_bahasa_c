#include <stdio.h>
int main(){
    float barang1,barang2,barang3,total = 0,diskon,potongan;

    printf("Masukan harga barang 1  = " );
    scanf(" %f", &barang1);
    printf("Masukan harga barang 2  = " );
    scanf(" %f", &barang2);
    printf("Masukan harga barang 3  = " );
    scanf(" %f", &barang3);
    printf("Masukan diskon(%%) = " );
    scanf(" %f", &diskon);

    total += barang1;
    total += barang2;
    total += barang3;
    printf("Total belanja 3 barang sebelum diskon = %.2f\n", total);
    
    potongan = total*(diskon/100);
    printf("Potongan = %.2f\n", potongan);

    total -= potongan;
    printf("Total belanja 3 barang setelah diskon = %.2f", total);
    
    return 0;
}