#include <stdio.h>
int main(){
    int a,b;
    printf("Masukan angka : ");
    scanf("%d",&a);

    for(b=10;b>=1;b--){
    printf("%d x %d = %d\n",a,b,a*b);
    }
    
    return 0;
}