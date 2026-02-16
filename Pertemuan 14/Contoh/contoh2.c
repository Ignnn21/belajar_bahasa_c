#include <stdio.h>
#include <string.h>

int main(){
    char alphabet[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Length is : %zu\n",strlen(alphabet)); //menghitung jumlah huruf dalam string (hello = 4)
    printf("Size is : %zu\n",sizeof(alphabet)); //menghtung berapa btye memori yang dipakai variabel(hallo = 5, karena \0(NULL) juga dihitung)

    return 0;
}