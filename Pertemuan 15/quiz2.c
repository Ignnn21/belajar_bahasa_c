#include <stdio.h>

int main(){
    int data[2][7][3] = { 
        // Misal
        {
            {1,6,3},
            {2,1,3},
            {1,5,2},
            {1,6,2},
            {3,3,3},
            {2,4,9},
            {1,1,3}
        },
        {
            {3,3,3},
            {2,2,3},
            {1,4,4},
            {2,2,2},
            {5,3,5},
            {2,4,3},
            {1,2,3}
        }
    };

    printf("Stok buah:\n");
    for(int i = 0; i <2; i++){
        printf("\nMinggu %d\n",i+1);
        int jumlah_apel = 0;
        int jumlah_pisang = 0;
        int jumlah_jeruk = 0;
        printf("|%-7s|%-7s|%-7s|%-7s|\n","Hari","Apel","Pisang","Jeruk");
        for(int j = 0; j<7; j++){
            printf("|%-7d",j+1);
            for(int k =0; k<3; k++){
                printf("|%-7d",data[i][j][k]);
                jumlah_apel += data[i][j][k];
                jumlah_pisang += data[i][j][k];
                jumlah_jeruk += data[i][j][k];
            }
            printf("|\n");
        }
        printf("\nJumlah stok apel = %d\n",jumlah_apel);
        printf("Jumlah stok pisang = %d\n",jumlah_pisang);
        printf("Jumlah stok jeruk = %d\n",jumlah_jeruk);
    }

    return 0;
}