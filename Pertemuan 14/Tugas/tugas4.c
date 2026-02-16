#include <stdio.h>
#include <string.h>

int main(){
    char nama[50];
    
    printf("Count the total number of words in a string :\n");
    printf("------------------------------------------------------\n");
    printf("Input the string : ");
    scanf(" %[^\n]", nama);
 
    int kata = 0;
    int jumlah = 0;
    for(int i = 0; i < strlen(nama); i++){
        if(nama[i] != ' ' && kata == 0){
            jumlah++;
            kata = 1;
        }
        else if(nama[i] == ' '){
            kata = 0;
        }
    }

    printf("Total number of words in the string is : %d",jumlah);

    return 0;
}