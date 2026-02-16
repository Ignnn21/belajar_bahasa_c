#include <stdio.h>

int main (){
    int matrix[2][3] = {
        {12,7,3},
        {9,15,6}
    };
    int max=matrix[0][0];
    int min=matrix[0][0];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrix[i][j]);
            if(matrix[i][j]>max){
                max = matrix[i][j];
            }
            if(matrix[i][j] < min){
                min = matrix[i][j];
            }
        }
        printf("\n");
    }

    printf("Nilai maksimum : %d\n",max);
    printf("Nilai mimimum : %d\n",min);
    return 0;
}