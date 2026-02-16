#include <stdio.h>
 //Pemanggilan library math untuk nilai pi.
#define _USE_MATH_DEFINES
#include <math.h>

// Membuat fungsi untuk menghitung luas tabung
float luas(float r, float t){
    return 2 * M_PI * r * (r+t);
}

// Membuat fungsi untuk menghitung volume tabung
float volume(float r, float t){
    return M_PI * r * r * t;
}

int main (){
    // Deklarasi variabel dalam tipe float
    float r,t,hasil;

    // Meminta input kepada pengguna
    printf("Masukkan jari-jari permukaan tabung : ");
    scanf("%f",&r);
    printf("Masukkan tinggi tabung : ");
    scanf("%f",&t);

    // Menampilkan output dengan memanggil fungsi
    printf("Luas permukaan tabung adalah %.2f", luas(r,t));
    printf("\nVolume permukaan tabung adalah %.2f", volume(r,t));
    return 0 ;
}