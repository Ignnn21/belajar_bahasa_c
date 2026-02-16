#include <stdio.h>

int main (){
    // Deklarasi variabel
    int angka[2][3][4] = {
        {
            {500,700,800,600},
            {650,720,810,630},
            {700,750,900,700}
        },
        {
            {400,600,550,500},
            {450,620,580,550},
            {500,650,600,580}
        },
       
    };

    // Program menampilkan output total penjualan
    for(int i = 0; i < 2; i++){
        printf("Cabang %d : \n",i+1);
        for(int j = 0; j < 3; j++){
            float jumlah = 0;
            printf("Bulan ke-%d total keuntungan : ",j+1);
            for(int k = 0; k < 4; k++){
                jumlah += angka[i][j][k];
            }
            printf("Rp. %.3f\n",jumlah);
        }
        printf("\n");
    }
    return 0;
}