#include <stdio.h>
void cekTahun(int tahun){
    if (tahun%400==0){
        printf("%d merupakan tahun kabisat",tahun);
    }
    else if (tahun%100==0){
        printf("%d bukan tahun kabisat",tahun);
    }
    else if(tahun%4==0){
        printf("%d merupakan tahun kabisat",tahun);
    }
    else {
        printf("%d bukan tahun kabisat",tahun);
    }
    
}

int main(){
    int tahun;
    printf("Masukkan tahun : ");
    scanf("%d",&tahun);
    cekTahun(tahun);
    return 0;
}