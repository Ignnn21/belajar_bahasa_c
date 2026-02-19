#include <stdio.h>
int main(){
    int input,a=3,baris1 = 0,baris2 = 1,baris3;
    printf("Input jumlah baris fibonacci : ");
    scanf("%d",&input);
    if(input==1){
        printf("%d ",baris1);
    }
    else if(input==2){
        printf("%d ",baris1);
        printf("%d ",baris2);
    }
    else if(input > 2){
        printf("%d ",baris1);
        printf("%d ",baris2);

    for(;a<=input;a++){
        baris3 = baris1 + baris2;
        printf("%d ",baris3);
        baris1 = baris2;
        baris2 = baris3;
    }
    }
    else{
        printf("Input yang anda masukan salah (harus bilangan positif)");
    }
    return 0;
}