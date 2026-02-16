#include <stdio.h>
#include <string.h>

struct mobil
{
    char nama[50];
    int harga;
    int hari;
};

struct rental
{
    char nama[50];
    struct mobil m[2];
};

int main(){
    struct rental r;
    strcpy(r.nama, "Eka");
    strcpy(r.m[0].nama, "Avanza");
    r.m[0].harga = 350000;
    r.m[0].hari = 2;
    strcpy(r.m[1].nama, "Fortuner");
    r.m[1].harga = 850000;
    r.m[1].hari = 1;

    printf("Pelanggan : %s\n\n",r.nama);
    
    int total = 0;
    int harga;
    for(int i = 0; i < 2; i++){
        harga = r.m[i].hari * r.m[i].harga;
        printf("%-9s (%d hari) = %d\n",r.m[i].nama, r.m[i].hari, harga);
        total += (r.m[i].hari * r.m[i].harga);
    }

    printf("\nTotal biaya sewa   = %d",total);
    
    return 0;
}