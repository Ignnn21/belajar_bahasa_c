#include <stdio.h>
int main(){
    float a,b, c;
    float keliling;

    printf("Masukan panjang a sisi =" );
    scanf(" %f", &a);
    printf("Masukan panjang b sisi =" );
    scanf(" %f", &b);
    printf("Masukan panjang c sisi =" );
    scanf(" %f", &c);

    keliling = a+b+c;
    printf("Keliling segitiga = %.2f", keliling);
    
    return 0;
}