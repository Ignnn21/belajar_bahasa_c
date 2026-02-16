#include <stdio.h>
void NilaiAkhir(float nilai_uts, float nilai_uas, float rata_kuis){
    float total;
    total = (nilai_uts*35/100) + (nilai_uas*35/100) + (rata_kuis*30/100);
    printf("Total nilai akhir = %.2f",total);
}

int main(){
    float nilai_uts, nilai_uas,rata_kuis;
    printf("PROGRAM MENGHIUNG NILAI AKHIR\n");
    printf("Masukkan total nilai UTS :");
    scanf("%f",&nilai_uts);
    printf("Masukkan total nilai UAS :");
    scanf("%f",&nilai_uas);
    printf("Masukkan total rata-rata nilai kuis :");
    scanf("%f",&rata_kuis);

    NilaiAkhir(nilai_uts,nilai_uas,rata_kuis);

    return 0;
}