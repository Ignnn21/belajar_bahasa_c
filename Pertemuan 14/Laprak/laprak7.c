#include <stdio.h> 
#include <string.h>
int main(){
    char teks[300];
    char kata[100][100];
    char hasil[300] = "";
    printf("Program penghapus duplikasi data\n");
    printf("Masukkan kalimat : ");
    scanf(" %[^\n]", teks);
    int jumlah = 0;
    for(int i = 0; i < strlen(teks); i++){
        if(teks[i] >= 'A' && teks[i] <= 'Z'){
            if(i == 0){
                teks[i] = teks[i];
            }
            else{
                teks[i] = teks[i] + 32;
            }
        }
        if(teks[i] == ',' || teks[i] == '.' || teks[i] == '!' || teks[i] == '?' ){
            teks[i] = ' ';
        }
    }
    char *token = strtok(teks, " ");
    while(token != NULL){
        int sudahAda = 0;
        for(int i = 0; i < jumlah; i++){
            if(strcmp(kata[i], token) == 0){
                sudahAda = 1;
                break;
            }
        }
        if(sudahAda == 0){
            strcpy(kata[jumlah], token);
            jumlah++;

            strcat(hasil, token);
            strcat(hasil, " ");
        }
        token = strtok(NULL, " ");
    }
    printf("Hasil            : %s\n", hasil);
    return 0;
}