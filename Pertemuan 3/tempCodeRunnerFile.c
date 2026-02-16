#include <stdio.h>
int main(){
    // Deklarasikan variabel
    int a;

    printf("Masukan nilai = ");
    scanf(" %d", &a);

    printf("=======Hasil=======\n");
    // Cek kondisi
     if (a > 100 || 0 > a){
        printf("EROR");
     }
     else if (a >= 85){
        printf("%d merupakan grade A", a);
    }
    else if (a >= 80){
        printf("%d Merupakan grade A-", a);
    }
    else if (a >= 75){
        printf("%d Merupakan grade B+", a);
    }
    else if (a >= 70){
        printf("%d Merupakan grade B", a);
    }
    else if (a >= 65){
        printf("%d Merupakan grade B-", a);
    }
    else if (a >= 60){
        printf("%d Merupakan grade C+", a);
    }
    else if (a >= 55){
        printf("%d Merupakan grade C", a);
    }
    else if (a >= 50){
        printf("%d Merupakan grade C-", a);
    }
    else if (a >= 40){
        printf("%d Merupakan grade D", a);
    }
    else if (a < 40){
        printf("%d Merupakan grade E", a);
    }
    
    
    return 0;
}