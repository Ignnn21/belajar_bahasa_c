#include <stdio.h>
#include <string.h>

struct buku
{
    char nama[50];
    int hari;
};

struct perpus
{
    char nama[50];
    struct buku b[3];
};


int main(){
    struct perpus  p;
    strcpy(p.nama, "Rina");
    strcpy(p.b[0].nama, "Algoritma");
    p.b[0].hari = 0;
    strcpy(p.b[1].nama, "Struktur Data");
    p.b[1].hari = 2;
    strcpy(p.b[2].nama, "Basis Data");
    p.b[2].hari = 3;

    printf("Anggota     : %s\n\n",p.nama);
    printf("Daftar buku dipinjam : \n");

    int hari_denda = 0;
    for(int i = 0; i < 3; i++){
        hari_denda += p.b[i].hari;
        printf("| %d | %-13s | Hari telat : %d |\n",i+1, p.b[i].nama, p.b[i].hari);
    }

    printf("\nTotal denda : Rp. %d", hari_denda*1000);
    
    return 0;
}