#include <stdio.h>

int main (){
    // Deklrasi variabel
    float angka[2][3][4] = {
        {
            {3.0,3.2,2.8,3.5},
            {3.1,3.3,3.0,3.4},
            {3.5,3.7,3.6,3.8}
        },
        {
            {2.8,3.0,2.9,3.2},
            {3.0,3.1,3.3,3.4},
            {3.2,3.5,3.4,3.6}
        },
       
    };
    
    // Program menampilkan output total ipk
    for(int i = 0; i < 2; i++){
        float ipk = 0;
        printf("Mahasiswa %d : \n",i+1);
        for(int j = 0; j < 3; j++){
            float jumlah = 0;
            printf("Semester ke-%d IP = ",j+1);
            for(int k = 0; k < 4; k++){
                jumlah += angka[i][j][k];
            }
            ipk += jumlah/4;
            printf("%.2f\n",jumlah/4);
        }
        printf("IPK akhir = %.2f\n\n",ipk/3);
    }
    
    return 0;
}