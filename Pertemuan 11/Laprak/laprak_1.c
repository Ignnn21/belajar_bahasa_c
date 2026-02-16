#include <stdio.h>

int main (){
    // Deklarasi variabel
    int nilai[2][3][3] = {
       {
        {80,75,90},
        {60,85,88},
        {70,78,84}
       },
       {
        {82,77,89},
        {65,90,92},
        {75,80,86}
       }
    };

    // Program menampilkan output nilai rata-rata
    for(int i = 0; i < 2; i++){
        printf("Mata kuliah %d :\n",i+1);
        for(int j = 0; j < 3; j++){
            float jumlah = 0;
            printf("Mahasiswa %d rata-rata : ",j+1);
            for(int k = 0; k < 3; k++){
                jumlah += nilai[i][j][k];
            }
            printf("%.2f\n",jumlah/3);
        }
        printf("\n");
    }
    
    return 0;
}