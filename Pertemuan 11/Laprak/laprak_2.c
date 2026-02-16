#include <stdio.h>

int main (){
    // Deklarasi variabel
    int angka[2][3][2] = {
        {
            {120,100},
            {140,150},
            {160,170}
        },
        {
            {200,180},
            {220,210},
            {230,240}
        },
    };

    // Program menampilkan output total penjualan
    for(int i = 0; i < 2; i++){
        printf("Cabang %d : \n",i+1);
        for(int j = 0; j < 3; j++){
            float jumlah = 0;
            printf("Bulan ke-%d total penjualan : ",j+1);
            for(int k = 0; k < 2; k++){
                jumlah += angka[i][j][k];
            }
            printf("%.0f\n",jumlah);
        }
        printf("\n");
    }
    return 0;
}