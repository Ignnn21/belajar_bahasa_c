#include <stdio.h>
#include <string.h>

struct supplier
{
    char nama[40];
    char kontak[20];
    char kota[22];
};

struct produk
{
    int kode;
    char nama[50];
    float harga;
    struct supplier supplier;
};


int main (){
    struct produk p;
    p.kode = 1001;
    strcpy(p.nama, "Sosis");
    p.harga = 7000;
    strcpy(p.supplier.nama, "Pt abadi");
    strcpy(p.supplier.kontak, "029498");
    strcpy(p.supplier.kota, "Ngawi");

    printf("Kode Produk : %d\n",p.kode);
    printf("Nama Produk : %s\n",p.nama);
    printf("Harga       : %.0f\n",p.harga);
    printf("Supplier    : %s (%s), %s",p.supplier.nama, p.supplier.kontak, p.supplier.kota);
    
    return 0;
}