#include <stdio.h>
#include <string.h>

int main(){
    char nama[50]; 

    printf("Find the length of a string :\n");
    printf("----------------------------------------------------\n");
    printf("Input the string        : ");
    scanf(" %[^\n]", nama);
    printf("Length of the string is : %zu\n",strlen(nama));
    
    return 0;
}