#include <stdio.h>
#include <string.h>

int main(){
    char str1[20] = "Hello Word";
    char str2[20];

    // Copy string
    // strcpy(tujuan, sumber);
    // sumber = string asal yang ingin di salin
    // tujuan = tempat menampung hasil salinannya
    
    strcpy(str2, str1);
    printf("%s",str2);
    return 0;
}