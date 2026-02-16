#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char dimas[150], dimas1[150];
    printf("| %-15s | \n| %-15s | \n| %-15s |\n", 
        "Konversi Camel Case akan menghapus spasi", 
        "dan mengubah huruf pertama kata baru", 
        "menjadi huruf kapital");
    printf("------------------------------\n");
    for(int input = 1; input <= 3; input++){
        int pos = 0, counter = 0, i;
        printf("Masukkan Kalimat ke-%d Kalian : ", input);
        fgets(dimas, sizeof(dimas), stdin);
        dimas[strcspn(dimas, "\n")] = '\0';
        printf("------------------------------\n");
        printf("Kalimat = %s\n", dimas);
        for(i = 0; dimas[i] != '\0'; i++){
            if(dimas[i] == ' '){
                counter = 1;
            }
            else{
                if(counter == 1){
                    dimas1[pos++] = toupper(dimas[i]);
                    counter = 0;
                }
                else{
                    dimas1[pos++] = dimas[i];
                }

            }
        }
        dimas1[pos] = '\0';
        printf("Hasil Konversi Camel Case %d = %s\n", input, dimas1);
        printf("------------------------------\n");
    }
    return 0;
}