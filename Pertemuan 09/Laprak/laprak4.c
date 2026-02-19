#include <stdio.h>

int main(){
    // Deklarasi Variabel
    int angka[7] = {12,45,23,67,34,89,10};
    int i , max=angka[0], min=angka[0];

    // Menampilkan output array
    printf("Isi Array : ");
    for(i=0;i<7;i++){
        printf("%d ",angka[i]);

        // Program Menghitung Nilai Maksimal dan Nilai Minimal
        if (angka[i]>max){
            max = angka[i];
        }
        if (angka[i]<min){
            min = angka[i];
        }

    }

    printf("\nNilai maksimum : %d",max);
    printf("\nNilai minimum : %d",min);
    return 0;
}