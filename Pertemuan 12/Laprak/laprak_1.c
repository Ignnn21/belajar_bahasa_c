#include <stdio.h>

struct dataMahasiswa {
    char nama[50];
    char nim[20];
    char prodi[20];
    char fakultas[20];
};

int main (){
    struct dataMahasiswa m[100];
    int nampung = 0;
    int input;
    
    while(1){
        printf("\n====== MENU CRUD MAHASISWA ======\n");
        printf("1. Tambah Data\n");
        printf("2. Lihat Data\n");
        printf("3. Hapus Data\n");
        printf("4. Keluar\n");
        printf("Pilih Menu : ");
        scanf("%d",&input);
    
        if(input == 1){
            printf("\n====== MENU TAMBAH DATA ======\n");
            printf("Masukkan nama anda : ");
            scanf(" %[^\n]", m[nampung].nama);
            printf("Masukkan nim anda : ");
            scanf(" %[^\n]", m[nampung].nim);
            printf("Masukkan prodi anda : ");
            scanf(" %[^\n]", m[nampung].prodi);
            printf("Masukkan fakultas anda : ");
            scanf(" %[^\n]", m[nampung].fakultas);
            printf("Data berhasil ditambahkan!\n");
            nampung++;
            char a = 'y';
            printf("\nKembali ke menu utama? (y/n) = ");
            scanf(" %c", &a);
            if(a != 'y'){
                printf("\nTrimakasih telah mengunjungi website kami!");
                break;
            }
        }
    
        else if(input == 2){
            if(nampung == 0){
                printf("\n====== MENU DAFTAR DATA ======\n");
                printf("Belum ada data yang dimasukkan!\n\n");
                char a = 'y';
                printf("\nKembali ke menu utama? (y/n) = ");
                scanf(" %c", &a);
                if(a != 'y'){
                    printf("\nTrimakasih telah mengunjungi website kami!");
                    break;
                }
            }

            else{
                printf("\n====== MENU DAFTAR DATA ======\n");
                for (int i = 0; i < nampung; i++){
                    printf("%d. %s | %s | %s | %s \n", i+1, m[i].nama, m[i].nim, m[i].prodi, m[i].fakultas);
                }
                char a = 'y';
                printf("\n\nKembali ke menu utama? (y/n) = ");
                scanf(" %c", &a);
                if(a != 'y'){
                    printf("\nTrimakasih telah mengunjungi website kami!");
                    break;
                }
            }
        }

        else if(input == 3){
            if(nampung == 0){
                printf("\n====== MENU HAPUS DATA ======\n");
                printf("Tidak ada data yang bisa dihapus!\n\n");
                char a = 'y';
                printf("\nKembali ke menu utama? (y/n) = ");
                scanf(" %c", &a);
                if(a != 'y'){
                    printf("\nTrimakasih telah mengunjungi website kami!");
                    break;
                }
            } 
            else {
                printf("\n====== MENU HAPUS DATA ======\n");
                for(int i = 0; i < nampung; i++){
                    printf("%d. %s | %s | %s | %s\n", i+1, m[i].nama, m[i].nim, m[i].prodi, m[i].fakultas);
                }
                int nomor;
                printf("Masukkan nomor data yang ingin dihapus : ");
                scanf("%d", &nomor);
                nomor--;
                if(nomor < 0 || nomor >= nampung){
                    printf("Nomor yang dimasukkan tidak valid!\n\n");
                    char a = 'y';
                    printf("\nKembali ke menu utama? (y/n) = ");
                    scanf(" %c", &a);
                    if(a != 'y'){
                        printf("\nTrimakasih telah mengunjungi website kami!");
                        break;
                    }
                }
                else {
                    for(int i = nomor; i < nampung - 1; i++){
                        m[i] = m[i + 1];
                    }
                    nampung--; 
                    printf("Data berhasil dihapus!\n");
                    char a = 'y';
                    printf("\nKembali ke menu utama? (y/n) = ");
                    scanf(" %c", &a);
                    if(a != 'y'){
                        printf("\nTrimakasih telah mengunjungi website kami!");
                        break;
                    }
                }
            }
        }

        else{
            printf("\nTrimakasih telah mengunjungi website kami!");
            break;
        }
    }
    return 0;
}