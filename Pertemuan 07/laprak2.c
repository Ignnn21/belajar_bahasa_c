// Pemanggilan library standard input output
#include <stdio.h>

// Fungsi untuk menghitung rata-rata
float rataRata(float n1, float n2, float n3){
    return (n1+n2+n3) / 3;
}

// Fungsi utama dalam bahasa c
int main(){

    // Deklarasi variabel dalam tipe float
    float nilai1, nilai2, nilai3;

    // Program meminta input dari user
    printf("Masukkan 3 nilai : \n");
    scanf("%f %f %f",&nilai1, &nilai2, &nilai3);
    
    // Menampilkan output dengan memanggil fungsi
    printf("Rata-rata nilai = %.2f",rataRata(nilai1,nilai2,nilai3));
    return 0;
}