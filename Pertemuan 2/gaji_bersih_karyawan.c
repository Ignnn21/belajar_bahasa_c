#include <stdio.h>
int main(){
    float gaji, tunjangan, potongan, gaji_bersih;

    printf("Masukan gaji anda = " );
    scanf(" %f", &gaji);
    printf("Masukan tunjangan anda = " );
    scanf(" %f", &tunjangan);
    printf("Masukan potongan gaji anda = " );
    scanf(" %f", &potongan);
   

    gaji_bersih = gaji + tunjangan - potongan;
    printf("Gaji bersih = %.2f", gaji_bersih);
    
    return 0;
}