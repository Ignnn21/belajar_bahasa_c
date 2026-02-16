#include <stdio.h>

int main (){
    // Deklarasi Variabel
    int matrix[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    // Menampilkan matrix sebelum transpose
    printf("Matrix sebelum transpose :\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    // Menampilkan matrix setelah transpose
    printf("\nMatrix setelah transpose:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
    return 0 ;
}