#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Kecil(char *kalimat){
    for(int j = 0; kalimat[j]; j++){
        kalimat[j] = tolower(kalimat[j]);
    }
}

int main(){
    char dimas[150];
    int frek[256] = {0}, i, jumlah;

    printf("Masukkan Kalimat Kalian : ");
    scanf(" %[^\n]",dimas);

    dimas[strcspn(dimas, "\n")] = '\0';
    printf("Kalimat = %s\n", dimas);
    Kecil(dimas);

    for(i = 0; dimas[i] != '\0'; i++){
        if(dimas[i]  == ' '){
            frek[dimas[i]]--;
        }
        else{
            frek[dimas[i]]++;
        }
    }
    
    printf("Banyaknya karakter yang muncul dalam kalimat : \n");
    for(int j = 100; j > 0; j--){
        for(int k = 0; k < 256; k++){
            if(frek[k] == j){
                printf(" '%c' = %d\n", k, frek[k]);
            }
        }
    }
    return 0;
}