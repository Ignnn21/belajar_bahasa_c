#include <stdio.h>
#include <string.h>

int main(){
    char teks[100];
    int huruf[256] = {0};

    printf("Masukkan inputan : ");
    scanf(" %[^\n]", teks);

    for(int i = 0; i < strlen(teks); i++){
        if(teks[i] != ' ')
            huruf[(unsigned char)teks[i]]++;
    }

    printf("Frekuensi karakter (terbesar ke terkecil):\n");

    for(int i = 100; i >= 1; i--){       
        for(int j = 0; j < 256; j++){
            if(huruf[j] == i){
                printf("%c -> %d\n", j, i);
            }
        }
    }

    return 0;
}
