#include <stdio.h>
int main(){
    int i, j, baris, kolom;
    printf("Masukan angka untuk jumlah baris : ");
    scanf("%d",&baris);
    printf("Masukan angka untuk jumah kolom : ");
    scanf("%d",&kolom);

    for(i=1;i<=baris;i++){
        for(j=1;j<=kolom;j++){
            printf(" @ ");
        }
        printf("\n");
    }
    return 0;
}