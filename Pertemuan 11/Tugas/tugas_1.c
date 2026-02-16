#include <stdio.h>

int main(){
    int angka[2][3][2] = {
        {
            {2,1},
            {3,2},
            {1,1}
        },
        {
            {0,2},
            {1,3},
            {2,2}
        }, 
    };

    char huruf[3] = {
        'A',
        'B',
        'C'
    };

    for(int i = 0; i < 2; i++){
        printf("=== Turnamen %d ===\n", i+1);
        for(int j = 0; j < 3; j++){
            printf("Tim %c : ",huruf[j]);
            for(int k = 0; k < 2; k++){
                printf("%d ",angka[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}