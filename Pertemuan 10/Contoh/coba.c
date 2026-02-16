#include <stdio.h>

int main(){
    int matrix[2][3] = {{1,2,3},{4,5,6}};

    printf("%d\n\n", matrix[0][2]);

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    matrix[0][2] = 9;
    printf("Matriks setelah diubah:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");
    
    int arr[3][2]= {
        {0,1},
        {2,3},
        {4,5}
    };
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("arr[%d][%d] : %d\n",i,j,matrix[i][j]);
        }
    }

    printf("\n\n");

    int A[3][3]={
        {1,9,4},
        {5,1,7},
        {0,8,3},
    };

    for(int i = 0; i<3 ; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",A[i][j]);
        }
    printf("\n");
    }

    printf("\n");
    
    int B[3][3]={
        {11,6,25},
        {18,11,12},
        {19,12,64},
    };
    for(int i = 0; i<3 ; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",B[i][j]);
        }
    printf("\n");
    }
    
    printf("\n");
    
    int C[3][3];

    for(int i = 0; i<3 ; i++){
        for(int j = 0; j < 3; j++){
            C[i][j]= A[i][j] + B[i][j];
        }
    }

    for(int i = 0; i<3 ; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",C[i][j]);
        }
    printf("\n");
    }
    
    

    return 0;
}