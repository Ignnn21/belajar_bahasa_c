#include <stdio.h>

int main(){
    int array[3][2] = {
        {12,15},
        {10,14},
        {8,12}
    };

    printf("----------------------------\n");
    printf("|%-6s|%-9s|%-9s|\n","Kelas","Laki-laki","Perempuan");
    printf("----------------------------\n");
    
    int t2 = 0, total = 0;
    for(int i = 0; i < 3; i++){
        printf("|%-6d|",i+1);
        for(int j = 0; j < 2; j++){
            printf("%-9d|",array[i][j]);
            total += array[i][j];
            if(i == 2){
                t2 += array[1][j];
            }
        }
        printf("\n");
    }
    printf("----------------------------\n");

    printf("Jumlah total siswa di kelas 2 : %d\n",t2);
    printf("Jumlah total siswa  : %d",total);
    return 0;
}