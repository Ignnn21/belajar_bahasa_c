#include <stdio.h>
int main(){
    int a = 10, b = 10;
    for (;a>0;){
        printf("Ayam sekarang : %d\n",a);
        a--;
        printf("Satu ayam mati, sisa : %d\n\n",a);
    }
    printf("\n=============================\n");
    for (;b>0;b--){
        printf("Ayam sekarang : %d\n",b);
        printf("Satu ayam mati, sisa : %d\n\n",b-1);
    }
    return 0;
}