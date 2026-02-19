#include <stdio.h>
int main(){
    float r, pi = 22.00/7.00, t, v;

    printf("Masukan jari - jari alas tabung = " );
    scanf(" %f", &r);
    printf("Masukan tinggi tabung = " );
    scanf(" %f", &t);
     
    v = pi*(r*r)*t;
    printf("Volume tabung = %.2f", v);
    
    return 0;
}