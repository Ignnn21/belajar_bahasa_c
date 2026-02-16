#include <stdio.h>

int main(){
    // Deklarasi Variabel
    int angkaA[5] = {10,20,30,40,50};
    int angkaB[5] = {5,15,25,35,45};
    int i;

    // Menampilkan angka A dan angka B
    printf("Aray A : ");
    for(i=0;i<5;i++){
        printf("%d ",angkaA[i]);
    }

    printf("\nAray B : ");
    for(i=0;i<5;i++){
        printf("%d ",angkaB[i]);
    }

    // Program Penjumlahan
    printf("\nHasil penjumlahan (A + B) : ");
    for(i=0; i<5; i++){
        printf("%d ",angkaA[i]+angkaB[i]);
    }
    return 0;
}