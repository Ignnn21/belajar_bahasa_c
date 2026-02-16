#include <stdio.h>
#include <string.h>

int main(){
    char kata[100];
    char hasil[100];
    
    printf("Program menghapus karakter duplikat\n");
    printf("Masukkan input : ");
    scanf(" %[^\n]", kata);

    int h = 0;

    for(int i = 0; i < strlen(kata); i++){
        if(i == 0 || kata[i] != kata[i-1]){
            hasil[h++] = kata[i];
        }
    }

    hasil[h] = '\0';
    
    
    printf("Hasil          : %s",hasil);
    
    return 0;
}