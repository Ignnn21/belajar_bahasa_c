#include <stdio.h>
int main(){
    int a=1,total_a=0;
    float b,total_nilai=0;
    do{
        printf("Masukan Nilai %d : ",a);
        scanf("%f",&b);
        if(b!=0){
            total_a = a++;
            total_nilai += b;
        }
    }
    while(b!=0);
     if(total_a!=0){
     printf("Rata-rata dari %d nilai anda adalah %.2f",total_a,total_nilai/total_a);
    }
    else{
        printf("Tidak ada nilai yang diinput");
    }
    return 0;
}