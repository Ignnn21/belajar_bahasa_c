#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

// Deklarasi Prosedur
void LuasPersegi();
void LuasPersegiPanjang();
void LuasLingkaran();

int main(){
    int pilihan;
    printf("Program Menghitung Luas Bangun Datar\n");
    printf("1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Lingkaran\n");
    printf("Pilih bangun datar (1-3) = ");
    scanf("%d",&pilihan);

    switch (pilihan)
    {
    case 1:
        LuasPersegi();
        break;
    case 2:
        LuasPersegiPanjang();
        break;
    case 3:
        LuasLingkaran();
        break;
    
    default:
        printf("TOLOL");
        break;
    }
    return 0;
}

// Prosedur untuk menghitung luas persegi
void LuasPersegi(){
    float s,luas;
    printf("\nMasukan pangjang sisi =");
    scanf("%f",&s);
    luas = s*s;
    printf("Luas persegi = %2.f",luas);
}

// Prosedur untuk menghitung luas persegi panjang
void LuasPersegiPanjang(){
    float p,l,luas;
    printf("\nMasukan pangjang panjang =");
    scanf("%f",&p);
    printf("Masukan pangjang lebar =");
    scanf("%f",&l);
    luas = p*l;
    printf("Luas persegi panjang = %2.f",luas);
}

// Prosedur untuk menghitung luas lingkaran
void LuasLingkaran(){
    float r,pi,luas;
    printf("\nMasukan jari-jari lingkaran =");
    scanf("%f",&r);
    luas = M_PI*r*r;
    printf("Luas lingkaran = %2.f",luas);
}