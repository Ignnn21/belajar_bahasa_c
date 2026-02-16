#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Abaikan(char x[], char y[]){
    int i = 0;
    while(x[i] && y[i]){
        if(tolower(x[i]) != tolower(y[i])){
            return 0;
        }
        else{
            return 1;
        }
        i++;
    }
    return x[i] == y[i];
}

int main(){
    char dimas[150], dimas1[150][150], dimas2[150];
    int i, jumlah = 0, sementara = 0;
    printf("\t=== PROGRAM KALIMAT EFEKTIF ===\n\n");
    printf("Masukkan Kalimat Kalian : ");
    fgets(dimas, sizeof(dimas), stdin);
    dimas[strcspn(dimas, "\n")] = '\0';
    printf("------------------------------\n");
    printf("Kalimat = %s\n", dimas);
    for(i = 0; dimas[i] != '\0'; i++){
        char d = dimas[i];
        if(d == ' ' || d == '\0' || d == '\n' || d == ',' || d == '!'){
            if(sementara > 0){
                dimas2[sementara] = '\0';
                int sama = 0;
                for(int j = 0; j < jumlah; j++){
                    if(Abaikan(dimas2, dimas1[j])){
                        sama = 1;
                        break;
                    }
                }
                if(sama == 0){
                    strcpy(dimas1[jumlah], dimas2);
                    jumlah++;
                }
                sementara = 0;
            }
            if(d == '\0'){
                break;
            }
        }
        else{
            dimas2[sementara++] = d;
        }
    }
    printf("Hasil Kalimat Efektif :\n");
    for(i = 0; i < jumlah; i++){
        printf("%s", dimas1[i]);
        if(i < jumlah - 1){
            printf(" ");
        }
    }
    printf("\n------------------------------");
    return 0;
}