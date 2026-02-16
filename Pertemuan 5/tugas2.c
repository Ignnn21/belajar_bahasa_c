#include <stdio.h>
int main(){
    int i = 1, j, baris;
    printf("Masukan angka  : ");
    scanf("%d",&baris);

    while(i<=baris){
        j = 1;
        while(j<=i){
            printf("%d ",j);
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}