#include <stdio.h>

int main(){
    // Deklarasi Variabel
    int angka[5]= {10,20,30,40,50};
    int i;

    // Menampilkan Output
    printf("Isi Array :\n");
    for(i=0;i<5;i++){
        printf("Angka[%d] = %d\n",i,angka[i]);
    }
    return 0;
}