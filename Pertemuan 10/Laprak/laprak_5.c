#include <stdio.h>

int main (){
    // Deklarasi Variabel
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int pindah;
    
    // Menampilkan matrix asli
    printf("Matrix sebelum penukaran :\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    // Program menukar nilai matrix
    for(int j = 0; j < 3; j++){
        pindah = matrix[0][j];
        matrix[0][j] = matrix[2][j];
        matrix[2][j] = pindah;
    }
    
    // Menampilkan matrix setelah nilai ditukar
    printf("\nMatrix setelah menukar baris 1 dengan baris 3 :\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}