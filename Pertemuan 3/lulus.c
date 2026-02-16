#include <stdio.h>
int main(){
    // Deklarasikan variabel
    int a;

    printf("Masukan angka = ");
    scanf(" %d", &a);

    printf("=======Hasil=======\n");
    // Cek kondisi
    if(a > 100 || 0 > a){
       printf("%d = EROR SYSTEM", a);
   }
    else if (a >= 75){
        printf("Anda dinyatakan LULUS", a);
    }
    else if ( a < 75 ){
        printf("Anda dinyatakan TIDAK LULUS", a);
    }
    
    return 0;
}