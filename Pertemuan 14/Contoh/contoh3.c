#include <stdio.h>
#include <string.h>

int main(){
    char str1[20] = "Very";
    char str2[] = "Dwi";

    // Concate
    // strcat digunakan untuk menggabungkan dua string
    // str(destinasi, sumber)
    // destinasi = string yang akan ditambah (harus punya ruang yang cukup)
    // sumber = string yang ditambahkan ke belakang
    
    strcat(str1, str2);
    printf("Hasil concate data : %s\n",str1);

    strcat(str2, str1);
    printf("Hasil concate data : %s",str2);
    return 0;
}