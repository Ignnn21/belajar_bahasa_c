#include <stdio.h>
int main(){
    // Deklarasikan variabel
    int a, b;

    printf("Masukan nilai  = ");
    scanf(" %d", &a);
    printf("Masukan nilai  = ");
    scanf(" %d", &b);

    printf("=======Hasil=======\n");
    // Cek kondisi
    if (a > b){
        printf("%d lebih besar dari %d",a,b);
    }
     else if(a < b){
        printf("%d kurang dari %d",a,b);
    }
    else if (a == b){
        printf("%d sama dengan %d",a,b);
    }
    
    return 0;
}