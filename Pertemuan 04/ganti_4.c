#include <stdio.h>
int main(){
int input,a=1,genap=0,ganjil=0;
    
    for(;a<=10;a++){
    printf("Masukan angka : ");
    scanf("%d",&input);
    if(input%2==0){
        genap+=1;
    }
    else{
        ganjil+=1;
    }
    }
    printf("\nJumlah angka genap yang anda masukan : %d",genap);
    printf("\nJumlah angka ganjil yang anda masukan : %d",ganjil);
    return 0;
}