// Pemanggilan library standard input output 
#include <stdio.h>

// Fungsi untuk menentukan nilai terbesar
int nilaiTerbesar(int n1, int n2, int n3){
    if(n1 > n2 && n1 > n3){
        return n1;
    }
    else if(n2 > n1 && n2 > n3){
        return n2;
    }
    else {
        return n3;
    }
}

// Fungsi utama
int main (){

    // Deklarasi variabel dalam bentuk integer
    int n1,n2,n3;

    // Program meminta input dari user
    printf("Masukkan tiga angka :\n");
    scanf("%d %d %d",&n1,&n2,&n3);

    // Menampilkan output dengan memnggil fungsi
    printf("Nilai terbesar dari 3 angka yang anda input : %d", nilaiTerbesar(n1,n2,n3));

    return 0;
}