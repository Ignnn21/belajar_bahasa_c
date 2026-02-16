#include <stdio.h>
int main(){
    int i, j, baris;
    printf("Masukan angka : ");
    scanf("%d",&baris);

    if(baris>0){
    i = 1;
    do {
        j = 1;
        do{
            printf("%d %d\n",i,j);
            j++;
        }
        while(j<=3);
        i++;
        
    }
    while(i<=baris);
    }

    else{
     printf("Angka yang anda masukan salah");
    }
    return 0;
}