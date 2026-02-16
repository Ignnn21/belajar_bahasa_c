#include <stdio.h>

struct mahasiswa{
    char nama[50];
    int umur;
    float ipk;
};


int main(){
    // inisialisasi
    struct mahasiswa m1 = {"Ignasius", 20, 3.7};
    struct mahasiswa m2 = {"Marlon", 21, 3.8};
    struct mahasiswa m3 = {"Charindra", 22, 3.9};

    // masukkan struct mahasiswa ke dalam array
    struct mahasiswa daftar[] = {m1,m2,m3};
    int jumlah = sizeof(daftar) / sizeof(daftar[0]);
    
    // cetak record
    for(int i = 0; i<jumlah; i++){
        printf("Mahasiswa : %d\n",i+1);
        printf("Nama : %s\n",daftar[i].nama);
        printf("Umur : %d\n",daftar[i].umur);
        printf("IPK : %.2f\n\n",daftar[i].ipk);
    }

    // // cetak record manual
    // printf("Nama : %s\n", m1.nama);
    // printf("Umur : %d\n", m1.umur);
    // printf("IPK : %.2f\n", m1.ipk);
    
    return 0;
}