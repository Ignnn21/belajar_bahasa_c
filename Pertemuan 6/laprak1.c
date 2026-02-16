#include <stdio.h>
void konversi(float celcius){
    printf("Hasil Konversi :");
    printf("\nCelcius ke Farenheit : %.2f",celcius*9/5+32);
    printf("\nCelcius ke Reamur : %.2f",celcius*4/5);
    printf("\nCelcius ke Kelvin : %.2f",celcius+273.15);
}

int main(){
    float celcius;
    printf("Masukkan suhu dalam satuan celcius : ");
    scanf("%f",&celcius);
    konversi(celcius);
    return 0;
}