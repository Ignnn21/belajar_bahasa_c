#include <stdio.h>
#include <string.h>

int main(){
    char kata[100];

    printf("Program mendeteksi Palindrome\n");
    printf("Masukkan inputan : ");
    scanf(" %[^\n]", kata);

    int palindrome = 1;

    for(int i = 0; i < strlen(kata); i++){
        if(kata[i] != kata[strlen(kata) - 1 - i]){
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1){
        printf("Hasil            : Kata %s adalah palindrome", kata);
    }
    else{
        printf("Hasil            : Kata %s bukan palindrome", kata);
    }

    return 0;
}
