#include <stdio.h>
int main(){
    int a=1,total_a=0;
    float b,total_nilai=0;
    printf("Kalkulator rata rata nilai (jika 0 maka tidak menginput atau looping berhenti)\n");
    for(;a<=100000;){
        printf("Masukan nilai %d : ",a);
        scanf("%f",&b);
        if(b != 0){
        total_a = a++;
        total_nilai += b;
        }
        else{
            break;
        }
    }
    if(total_a!=0){
     printf("Rata-rata dari %d nilai anda adalah %.2f",total_a,total_nilai/total_a);
    }
    else{
        printf("Tidak ada nilai yang diinput");
    }
   
    return 0;
}