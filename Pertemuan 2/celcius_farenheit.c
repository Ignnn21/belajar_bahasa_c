#include <stdio.h>
int main(){
    float celcius, farenheit;

    printf("Masukan suhu satuan celcius = " );
    scanf(" %f", &celcius);
   

    farenheit = (celcius*9/5)+32;
    printf("Suhu farenheit = %.2f", farenheit);
    
    return 0;
}