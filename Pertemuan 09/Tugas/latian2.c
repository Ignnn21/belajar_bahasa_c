#include <stdio.h>
// Pemanggilan library String
#include <string.h>

int main(){
    // Deklarasi Variabel
    char plat[5][10];
    char input[10];
    int i,cek=0;

    // Input Plat Nomor
    printf("\n======================================\n");
    for(i=0;i<5;i++){
        printf("Masukkan plat nomor ke-%d : ",i+1);
        scanf("%s",plat[i]);
    }
    
    // Menampilkan Plat Nomor Input
    printf("\n======================================\n");
    printf("\nData Plat Nomor\n");
    for(i=0;i<5;i++){
        printf("%d. %s\n",i+1,plat[i]);
    }
    
    // Menampilkan Nomor Urut Plat Nomor Yang Dicari
    printf("\n======================================\n");
    printf("Masukkan plat nomor yang anda cari : ");
    scanf(" %s",input);
    for(i=0;i<5;i++){
        if(strcmp(input, plat[i]) == 0){
            printf("Plat nomor %s ada di urutan ke-%d\n",input,i+1);
            cek=1;
        }
    }
    if(cek!=1){
        printf("Plat nomor yang anda cari tidak ditemukan.");
    }
    return 0;
}
