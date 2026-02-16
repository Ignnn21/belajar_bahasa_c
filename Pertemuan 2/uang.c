#include <stdio.h>
int main(){
    float idr,kurs = 0.000061,usd;

    printf("Masukan uang satuan IDR  = " );
    scanf(" %f", &idr);
    
    usd = idr*kurs;
    printf("USD = %.2f", usd);
    
    return 0;
}