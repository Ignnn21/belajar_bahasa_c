#include <stdio.h>
int main(){
    int a,b,c,input;
    printf("Masukan tiggi segi tiga = ");
    scanf("%d",&input);
    for(a=1;a<=input;a++){
        for(b=input;b>=a;b--){
            printf(" ");
        }
        for(c=1;c<=2*a-1;c++){
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}