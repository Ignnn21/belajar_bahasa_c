#include <stdio.h>
int main(){
    float r, pi = 22.00/7.00,keliling;

    printf("Masukan panjang r = " );
    scanf(" %f", &r);
   

    keliling = 2*pi*r;
    printf("Keliling lingkaran = %.2f", keliling);
    
    return 0;
}