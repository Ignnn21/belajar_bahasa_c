#include <stdio.h>

void loping(int a){
    int i,j,jumlah=0;

    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            printf("%d ",a);
            jumlah++;
        }
        printf("\n");
    }
    printf("Jumlah %d\n\n",jumlah);
}

void loping2 (int a){
    int i,j,number=1;
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
}

int main(){
    int a;
    char b,nama[10];
   
    printf("Masukkan Char : ");
    scanf(" %c",&b);
    printf("Masukkan nama  : ");
    scanf(" %[^\n]",nama);

    printf("char : %c\n",b);
    printf("String : %s\n",nama);

    // loping(a);
    // loping2(a);
    return 0;
}