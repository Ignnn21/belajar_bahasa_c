#include <stdio.h>
void TanpaDiskon(int total){
    printf("Diskon : -\n");
    printf("Total bayar : %d",total);
}
void Diskon10Persen(int total){
    printf("Diskon : 10%%\n");
    printf("Total bayar setelah diskon : %d",total-(total*10/100));
}
void Diskon20Persen(int total){
    printf("Diskon : 20%%\n");
    printf("Total bayar setelah diskon : %d",total-(total*20/100));
}

int main(){
    int total;
    printf("Program Menghitung Diskon Pembelian\n");
    printf("Masukkan total belanja : ");
    scanf("%d",&total);
    if(total>=500000){
        Diskon20Persen(total);
    }
    else if(total>=100000){
        Diskon10Persen(total);
    }
    else{
        TanpaDiskon(total);
    }
    return 0;
}