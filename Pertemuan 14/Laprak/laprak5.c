#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char sub[100];
    
    printf("Program mendeteksi substring \n");
    printf("Masukkan string    : ");
    scanf(" %[^\n]", str);
    printf("Masukkan substring : ");
    scanf(" %[^\n]", sub);
    
    int lenStr = strlen(str);
    int lenSub = strlen(sub);
    int ditemukan = -1;
    
    for(int i = 0; i <= lenStr - lenSub; i++){
        int cocok = 1;
        for(int j = 0; j < lenSub; j++){
            if(str[i + j] != sub[j]){
                cocok = 0;
                break;
            }
        }

        if(cocok == 1){
            ditemukan = i;
            break;
        }
    }

    printf("Position           : %d\n", ditemukan);

    return 0;
}
