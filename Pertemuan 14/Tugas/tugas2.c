#include <stdio.h>
#include <string.h>

int main(){
    char nama[50];
    
    printf("Separate the individual characters from a string :\n");
    printf("------------------------------------------------------\n");
    printf("Input the string : ");
    scanf(" %[^\n]", nama);
    printf("The characters of the string are :\n");

    for(int i = 0; i< strlen(nama); i++)
        printf("%c ",nama[i]);

    return 0;
}