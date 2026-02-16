// Pemanggilan library standard input output
#include <stdio.h>

// Fungsi untuk menghitung harga setelah diskon
float diskon(float h, float d){
    return h - (h*(d/100));
}

// Fungsi utama
int main(){

    // Deklarasi variabel dalam tipe float
    float harga,persen;

    // Program meminta input dari user
    printf("Masukkan harga barang dan diskon :\n");
    scanf("%f %f",&harga,&persen);
    
    // Menampilkan output dengan memanggil fungsi
    printf("Harga setelah diskon : Rp.%.0f",diskon(harga,persen));
    return 0;
}