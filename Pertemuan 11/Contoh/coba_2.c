#include <stdio.h>

int main (){
    int matriksA[2][2]={
        {1,2},
        {2,4}
    };
    int matriksB[2][2]={
        {5,6},
        {7,8}
    };
    int matriksK[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matriksK[i][j] = 0;
        }
        printf("\n");
    }
    

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                matriksK[i][j] += matriksA[i][k]*matriksB[k][j];
            }
        }
        printf("\n");
    }

    
    printf("Matriks A :\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ",matriksA[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    printf("Matriks B :\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ",matriksB[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    printf("Matriks dari perkalian A * B :\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ",matriksK[i][j]);
        }
        printf("\n");
    }
    return 0;
}