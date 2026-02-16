#include <stdio.h>
int main(){
    float b,t,bmi;

    printf("Masukan berat badan(kg) = " );
    scanf(" %f", &b);
    printf("Masukan tinggi badan(m) = " );
    scanf(" %f", &t);

    bmi = b/(t*t);
    printf("Body Mass Index = %.2f", bmi);
    
    return 0;
}