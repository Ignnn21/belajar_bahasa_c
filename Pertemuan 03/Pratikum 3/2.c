#include <stdio.h>
int main(){
    // Deklarasikan variabel
    int a,b;

    printf("Masukan kode fakultas = ");
    scanf(" %d", &a);
    
    // Cek kondisi
    if (0 < a  && a < 4){
        if (a == 1){
            printf("Fakultas Sains Dan Teknologi");
            printf("\nMasukan kode prodi = ");
            scanf(" %d", &b);

            if (b == 1){
            printf("Informatika");
        }
        else if (b == 2){
            printf("Rekayasa Perangkat Lunak");
        }
        else if (b == 3){
            printf("Sistem Informasi");
        }
        else{
            printf("EROR");
        }
        }
        else if (a == 2){
            printf("Fakultas Pariwisata dan Humaniora ");
            printf("\nMasukan kode prodi = ");
            scanf(" %d", &b);

            if (b == 1){
            printf("Pariwisata");
        }
        else if (b == 2){
            printf("Bahasa Inggris");
        }
         else{
            printf("EROR");
        }
        }
        else if (a == 3){
            printf("Fakultas Ekonomi dan Bisnis ");
            printf("\nMasukan kode prodi = ");
            scanf(" %d", &b);

            if (b == 1){
            printf("Akuntansi");
        }
        else if (b == 2){
            printf("Manajemen");
        }
         else{
            printf("EROR");
        }
        }
    }
    else{
        printf("EROR");
    }
    
    return 0;
}