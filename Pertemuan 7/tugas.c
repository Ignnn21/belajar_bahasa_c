#include <stdio.h>
//Pemanggilan library math untuk nilai pi.
#define _USE_MATH_DEFINES
#include <math.h> 

int main (){
    // Deklarasi variabel dalam tipe float
    float r,t,hasil;

    // Meminta input kepada pengguna
    printf("Masukkan jari-jari permukaan tabung : ");
    scanf("%f",&r);
    printf("Masukkan tinggi tabung : ");
    scanf("%f",&t);

    // Menampilkan output sesuai dengan menggunakan rumus luas tabung dan volume tabung
    printf("Luas permukaan tabung adalah %.2f", 2 * M_PI * r * (r+t));
    printf("\nVolume tabung adalah %.2f", M_PI*r*r*t);
    return 0 ;
}