#include <stdio.h>
#include <string.h>

int main(){
    char kata[100];
    
    printf("Program reverse string\n");
    printf("Masukkan inputan : ");
    scanf(" %[^\n]", kata);

    printf("Hasil output     : ");
    for(int i = strlen(kata) - 1; i >= 0; i--){
        printf("%c",kata[i]);
    }

    return 0;
}