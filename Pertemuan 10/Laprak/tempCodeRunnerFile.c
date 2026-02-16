#include <stdio.h>

int main(){
    // Deklarasi variabel
    int matrixA[2][2] = {
        {1,2},
        {3,4}
    };
    int matrixB[2][2] = {
        {5,6},
        {7,8}
    };

    // Menampilka matrix A
    printf("Matrix A : \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ",matrixA[i][j]);
        }
        printf("\n");
    }

    // Menampilkan matrix B
    printf("\nMatrix B : \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ",matrixB[i][j]);
        }
        printf("\n");
    }

    // Menjumlah matrix A + B
    printf("\nMatrix A + B : \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%2d ",matrixA[i][j]+matrixB[i][j]);
        }
        printf("\n");
    }
    return 0;
}