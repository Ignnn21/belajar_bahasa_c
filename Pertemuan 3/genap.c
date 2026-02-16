#include <stdio.h>
int main(){
    // Deklarasikan variabel
    int a;

    printf("Masukan angka = ");
    scanf(" %d", &a);

    printf("=======Hasil=======\n");
    // Cek kondisi
     if (a == 0){
        printf("%d Merupakan nol", a);
    }
    else if (a % 2 == 0){
        printf("%d Merupakan bilangan genap", a);
    }
     else if(a % 2 != 0){
        printf("%d Merupakan bilangan ganjil", a);
    }
    
    return 0;
}