#include <stdio.h>
int main(){
    int i, j, k, baris, rumus;
    printf("Masukan angka untuk jumlah baris : ");
    scanf("%d",&baris);

    for(i=1;i<=baris;i++){
        for(j=baris;j>=i;j--){
            printf("  ");
        }
        rumus = 1;
        for(k=1;k<=i;k++){
            printf("%4d",rumus);
            rumus = rumus*(i-k)/k;
        }
        printf("\n");
    }
    return 0;
}