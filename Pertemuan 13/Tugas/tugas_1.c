#include <stdio.h>

struct alamat
{
    char namaJalan[50];
    char namaKota[50];
    char namaProvinsi[50];
};

struct karyawan
{
    char nama[50];
    char nip[50];
    int gaji;
    struct alamat a;
};


int main(){
    struct karyawan m[3];

    for(int i = 0; i<3; i++){
        printf("Karyawan %d\n", i+1);
        printf("Masukkan nama            : ");
        scanf(" %[^\n]", m[i].nama);
        printf("Masukkan nip             : ");
        scanf(" %[^\n]", m[i].nip);
        printf("Masukkan gaji            : ");
        scanf("%d", &m[i].gaji);
        printf("Masukkan alamat jalan    : ");
        scanf(" %[^\n]", m[i].a.namaJalan);
        printf("Masukkan alamat kota     : ");
        scanf(" %[^\n]", m[i].a.namaKota);
        printf("Masukkan alamat provinsi : ");
        scanf(" %[^\n]", m[i].a.namaProvinsi);
        printf("\n");
    }
    
    printf("========================================================================================================================\n");
    printf("|| %-25s || %-15s || %-12s || %-50s \n", "Nama", "Nip", "Gaji", "Alamat");
    printf("========================================================================================================================\n");
    for(int i = 0; i < 3; i++){
        printf("|| %-25s || %-15s || %-12d || %s, %s, %s \n",m[i].nama,m[i].nip,m[i].gaji,m[i].a.namaJalan,m[i].a.namaKota,m[i].a.namaProvinsi);
        printf("========================================================================================================================\n");
    }
    return 0;
}