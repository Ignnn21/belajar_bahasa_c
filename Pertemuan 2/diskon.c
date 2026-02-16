#include <stdio.h>
int main(){
    float harga, diskon, potongan, total_bayar;

    printf("Masukan harga barang = " );
    scanf(" %f", &harga);

    printf("Masukan diskon(%%) barang = " );
    scanf(" %f", &diskon);
   
    potongan = (diskon/100)*harga;
    total_bayar = harga - potongan;
    printf("Harga barang = %.2f", total_bayar);
    
    return 0;
}