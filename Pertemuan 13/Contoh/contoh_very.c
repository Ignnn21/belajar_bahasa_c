#include <stdio.h>
#include <string.h>

struct alamat
{
    char jalan[40];
    char kota[20];
    char provinsi[22];
};

struct mahasiswa
{
    int nim;
    char nama[50];
    struct alamat alamat;
};


int main (){
    struct mahasiswa m;
    m.nim = 12345;
    strcpy(m.nama, "Ignasius");
    strcpy(m.alamat.jalan, "Jalan raya solo");
    strcpy(m.alamat.kota, "Surakarta");
    strcpy(m.alamat.provinsi, "Jawa Tengah");

    printf("Nim     : %d\n",m.nim);
    printf("Nama    : %s\n",m.nama);
    printf("Alamat  : %s, %s, %s\n",m.alamat.jalan, m.alamat.kota, m.alamat.provinsi);
    
    return 0;
}