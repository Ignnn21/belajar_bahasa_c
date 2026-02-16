#include <stdio.h>

struct barang
{
    char nama[50];
    float harga;
    float diskon;
};

int main(){
    // Data barang
    struct barang b1 =
    {
        "Sabun",10000, 10 
    };
    struct barang b2 =
    {
        "Shampo",15000, 15 
    };
    struct barang b3 =
    {
        "Soda",8000, 5 
    };

    // Masukkan data barang ke array
    struct barang daftar[] =
    {
        b1,b2,b3
    };
    
    int jumlah = sizeof(daftar) / sizeof(daftar[0]);

    printf("Harga setelah diskon\n\n");
    for(int i = 0; i<jumlah; i++){
        float potongan = daftar[i].harga * (daftar[i].diskon/100);
        float harga_total = daftar[i].harga - potongan;
        printf("Barang : %d\n",i+1);
        printf("Nama : %s\n",daftar[i].nama);
        printf("Harga : %.0f\n",daftar[i].harga);
        printf("Diskon : %.0f%%\n",daftar[i].diskon);
        printf("Potongan : %.0f\n",potongan);
        printf("Total harga : %.0f\n\n",harga_total);
    }
    
    return 0;
}