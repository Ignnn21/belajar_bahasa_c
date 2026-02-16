#include <stdio.h>

int main(){
    int angka[2][3][3] = {
        {
            {100,120,90},
            {110,110,95},
            {105,125,100}
        },
        {
            {90,100,85},
            {95,105,90},
            {100,110,95}
        }, 
    };


    for(int i = 0; i < 2; i++){
        printf("=== Data Produksi Pabrik %d ===\n", i+1);
        for(int j = 0; j < 3; j++){
            printf("Bulan %d : ",j+1);
            for(int k = 0; k < 3; k++){
                printf("%d "  ,angka[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}