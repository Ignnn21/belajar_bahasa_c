#include <stdio.h>

int main(){
    int stok[2][7][3] = {
        {
            {1,2,3},
            {2,4,3},
            {1,5,1},
            {2,2,2},
            {1,2,9},
            {5,3,3},
            {6,1,0}
        },
        {
            {0,2,1},
            {1,4,0},
            {5,3,3},
            {0,2,0},
            {4,3,4},
            {5,5,1},
            {1,6,1}
        },
    };

    char hari[7][20] = {
        "Senin",
        "Selasa",
        "Rabu",
        "Kamis",
        "Jumat",
        "Sabtu",
        "Minggu"
    };

    int total = 0;

    for(int i = 0; i < 2; i++){
        int apel = 0;
        int pisang = 0;
        int jeruk = 0;
        printf("Tabel stok buah minggu ke-%d\n",i+1);
        printf("-------------------------------\n");
        printf("|%-8s|%-6s|%-6s|%-6s|\n","Hari","Apel","Pisang","Jeruk");
        printf("-------------------------------\n");
        for(int j = 0; j < 7; j++){
            printf("|%-8s|",hari[j]);
            for(int k = 0; k < 3; k++){
                printf("%-6d|",stok[i][j][k]);
                total += stok[i][j][k];
            }
            apel += stok[i][j][0];
            pisang += stok[i][j][1];
            jeruk += stok[i][j][2];
            printf("\n");
        }
        printf("-------------------------------\n");
        printf("Stok apel pada minggu ke-%d : %d\n",i+1,apel);
        printf("Stok pisang pada minggu ke-%d : %d\n",i+1,pisang);
        printf("Stok jeruk pada minggu ke-%d : %d\n",i+1,jeruk);
        printf("\n\n");
    }

    printf("Total stok selama 2 Minggu : %d",total);
    return 0;
}