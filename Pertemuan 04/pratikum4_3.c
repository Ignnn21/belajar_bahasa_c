#include <stdio.h>
int main(){
    int a=0,input;
    printf("Masukan angka : ");
    scanf("%d",&input);
    printf("Angka genap dari 0 sampai %d adalah ",input);
    if(input>=0)
    for(;a<=input;a+=2){
        printf("%d ",a);
    }
    else{
        for(;a>=input;a-=2){
            printf("%d ",a);
        }
    }
    return 0;
}