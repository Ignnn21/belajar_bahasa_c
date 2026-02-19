#include <stdio.h>
int main(){
    int a=0,b=1,b2=-1,genap,ganjil,jgenap=0,jganjil=0;
    printf("Input angka untuk bilangan genap : ");
    scanf("%d",&genap);
    printf("Input angka untuk bilangan ganjil : ");
    scanf("%d",&ganjil);

    printf("\nAngka genap dari 0 sampai %d adalah ",genap);
    if(genap>=a){
        for(;a<=genap;a+=2){
            printf("%d ",a);
            jgenap++;
    }
    }
    else{
        for(;a>genap;a-=2){
            printf("%d ",a);
            jgenap++;
    }
    }
    printf("\nJumlah angka genap : %d",jgenap);

    printf("\n\nAngka ganjil dari 0 sampai %d adalah ",ganjil);
    if(ganjil>=b){
        for(;b<=ganjil;b+=2){
            printf("%d ",b);
            jganjil++;
    }
    }
    else{
        for(;b2>=ganjil;b2-=2){
            printf("%d ",b2);
            jganjil++;
    }
    }
   
    printf("\nJumlah angka ganjil : %d",jganjil);
    return 0;
}