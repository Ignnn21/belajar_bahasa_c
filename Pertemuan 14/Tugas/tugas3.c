#include <stdio.h>
#include <string.h>

int main(){
    char nama[50];
    printf("Print individual characters of string in reverse order :\n");
    printf("------------------------------------------------------\n");
    printf("Input the string : ");
    scanf(" %[^\n]", nama);
    printf("The characters of the string in reverse :\n");

    for(int i = strlen(nama) -1 ; i >= 0; i--){
          printf("%c ",nama[i]);
    }
      
    return 0;
}