// Pemanggilan library standard input output
#include <stdio.h>

// Fungsi untuk menghitung faktorial (fungsi rekursif)
int faktorial(int a){
    if (a==1){
        return a;
    }
    else{
        return a*faktorial(a-1);
    }
}

// Fungsi utama dalam bahasa c
int main(){

    // Deklarasi variabel dalam tipe integer
    int a;

    // Program untuk meminta input pada pengguna
    printf("Masukkan angka : ");
    scanf("%d",&a);

    // Menampilkan output dengan memanggil fungsi
    printf("%d! = %d",a,faktorial(a));
  
    return 0;
}