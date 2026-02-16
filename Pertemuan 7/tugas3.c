#include <stdio.h>

// Membuat fungsi untuk mengonversi nilai angka ke dalam bentuk nilai huruf
char konversiNilai(float nilai){
    if(nilai>=80){
        return 'A';
    }
    else if(nilai>=60){
        return 'B';
    }
    else if(nilai>=40){
        return 'C';
    }
    else if(nilai>=20){
        return 'D';
    }
    else{
        return 'E';
    }
    
}

int main(){
    // Mendeklarasikan variabel dalam tipe char, int dan float
    char nama[50];
    int nim;
    float nilai;

    // Meminta input kepada pengguna
    printf("Masukkan nama  : ");
    scanf(" %[^\n]",nama);
    printf("Masukkan NIM   : ");
    scanf("%d",&nim);
    printf("Masukkan nilai : ");
    scanf("%f",&nilai);

    // Menampilkan output dengan memanggil fungsi
    printf("=====HASIL=====\n");
    printf("Nama  : %s\n",nama);
    printf("NIM   : %d\n",nim);
    printf("Nilai : %c",konversiNilai(nilai));
    return 0;
}