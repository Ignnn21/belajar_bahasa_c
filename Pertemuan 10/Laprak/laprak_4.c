#include <stdio.h>

int main (){
    // Deklarasi variabel
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // Menampilkan matrix
    printf("Matrix 3x3 :\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    // Program menghitung elemen perkolom matrix
    for(int i = 0; i < 3; i++){
        int jumlah = 0;
        for(int j = 0; j < 3; j++){
            jumlah += matrix[j][i];
        }
        printf("Jumlah kolom ke-%d = %d\n",i+1, jumlah);
    }

}