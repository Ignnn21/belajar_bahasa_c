#include <stdio.h>
#include <string.h>

int main(){
    char teks[500];

    printf("Masukkan teks : ");
    scanf(" %[^\n]",teks);

    int hasil = 1, jumlah = 0;
    
    for(int i = 0; i < strlen(teks); i++){
        if(teks[i] != ' ' && hasil == 1){
            hasil = 0;
            jumlah += 1;
        }
        else if(teks[i] == ' '){
            hasil = 1;
        }

       
    }

    printf("Total kata dari teks : %d",jumlah);
    return 0;
}