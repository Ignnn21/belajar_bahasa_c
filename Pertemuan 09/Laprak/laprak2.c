#include <stdio.h>

int main (){
    // Deklarasi Variabel
    int angka[5] = {1,2,3,4,5};
    int i, balik;

    // Menampilkan Output Secara Runtut
    printf("Array sebelum dibalik :\n");
    for(i=0;i<5;i++){
        printf("%d ",angka[i]);
    }
    
    // Menampilkan Output secara terbalik
    printf("\nArray sesudah dibalik :\n");
    for(i=0;i<5 / 2;i++){
        balik = angka[i];
        angka[i] = angka[5-1-i];
        angka[5-1-i] = balik;
    }
    for(i=0;i<5;i++){
        printf("%d ",angka[i]);
    }
    

    return 0;
}