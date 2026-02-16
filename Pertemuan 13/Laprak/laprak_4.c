#include <stdio.h>
#include <string.h>

struct tunjangan
{
    char tunjangan[50];
    int harga;
};

struct karyawan
{
    char nama[50];
    int gaji;
    struct tunjangan t[3];
};


int main(){
    struct karyawan k;
    
    strcpy(k.nama, "Marlon");
    k.gaji = 5000000;
    strcpy(k.t[0].tunjangan, "Transport");
    k.t[0].harga = 500000;
    strcpy(k.t[1].tunjangan, "Makan");
    k.t[1].harga = 700000;
    strcpy(k.t[2].tunjangan, "Kesehatan");
    k.t[2].harga = 300000;

    printf("Nama karyawan : %s\n",k.nama);
    printf("Gaji          : %d\n\n",k.gaji);
    printf("Rincian tunjangan\n");

    int total = 0;
    for(int i = 0; i < 3; i++){
        printf("%d. %-10s : %d\n",i+1, k.t[i].tunjangan, k.t[i].harga);
        total += k.t[i].harga;
    }

    printf("\nTotal gaji    : %d",total + k.gaji);

    return 0;
}