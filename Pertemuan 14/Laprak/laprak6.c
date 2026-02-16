#include <stdio.h>
#include <string.h>
int main(){
    char teks[200];
    char hasil[200];
    printf("Program camel case\n");
    printf("Masukkan kalimat : ");
    scanf(" %[^\n]", teks);
    int j = 0;
    int kapital = 0;
    for(int i = 0; i < strlen(teks); i++){
        if(teks[i] == ' '){
            kapital = 1;
        } 
        else {
            if(kapital == 1 && (teks[i] >= 'a' && teks[i] <= 'z') ){
                hasil[j++] = teks[i] - 32; 
                kapital = 0;
            } else {
                hasil[j++] = teks[i];
                kapital = 0;
            }
        }
    }
    hasil[j] = '\0';
    printf("Hasil            : %s\n", hasil);
    return 0;
}
