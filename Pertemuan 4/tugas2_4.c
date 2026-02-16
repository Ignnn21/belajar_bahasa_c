#include <stdio.h>
int main(){
    int a=1;
    float b,total=0;
    for(;a<=5;a++){
    printf("Masukan nilai %d : ",a);
    scanf("%f",&b);
    total += b;
    }
    printf("Nilai rata-rata anda adalah %.2f",total/5);
    return 0;
}