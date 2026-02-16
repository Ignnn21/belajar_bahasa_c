#include <stdio.h>

int main(){
    int data[3][3]={
        {12, 15},
        {10, 14},
        {8, 12}
    };

    printf("|%-5s|%-7s|%-7s|\n","Kelas","Laki-lai","Perempuan");
    int jumlah = 0;
    int total=0;
    for(int i = 0; i<3; i++){
        printf("|%-5d| ",i+1);
        for(int j = 0; j<2; j++){
            printf("%-7d| ",data[i][j]);
            total += data[i][j];
            if(i == 2){
                jumlah += data[1][j];
            }
        }
        printf("\n");
    }

    printf("\nJumlah kelas 2 = %d\n",jumlah);
    printf("Jumlah seluruh murid = %d\n",total);



    return 0;
}
