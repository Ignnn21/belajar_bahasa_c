// Pemanggilan library standard input output
#include <stdio.h>

// Fungsi untuk menentukan angka genap ganjil
char* GenapGanjil (int a){
    if(a%2==0){
        return "genap";
    }
    else{
        return "ganjil";
    }
}

// Fungsi utama
int main (){

    // Deklarasi variabel dalam tipe integer
    int angka;

    // Program meminta input dari user
    printf("Masukkan angka : ");
    scanf("%d",&angka);

    // Menampilkan output dengan memanggil fungsi
    printf("%d adalah bilangan %s",angka,GenapGanjil(angka));
    return 0;   
}