#include <stdio.h>
#include <string.h>

int main (){
    char s1[] = "Ignasius";
    char s2[] = "Marlon";

    // strlwr(s1); //huruf kecil
    // strupr(s1); //huruf besar
    // strcat(s1, s2); //menggabungkan sring 2 dengan string 1
    // strncat(s1, s2, 3); //menggabungkan karakter dari string 2  menjadi satu dengan string 2
    // strcpy(s1, s2); //menkopi string 2 ke string 1
    // strncpy(s1, s2, 3); //
    // strset(s1, 'f'); //mengubah semua karakter sesuai isi set
    // strnset(s1, 'F', 1); //mengubah karakter 1 seuai isi set
    
    // printf("%s",s1);

    // int total = strlen(s1);
    // int total = sizeof(s1);
    // printf("%d",total);

    // int hasil = strcmp(s1, s2); //membandingkan string 1 dengan string 2
    int hasil = strncmp(s1, s2, 1); //membandingkan karakter pertama string 1 dengan kararkter 1 string dua

    if(hasil==0){
        printf("String %s dengan %s sama",s1,s2);
    }
    else{
        printf("String %s dengan %s beda",s1,s2);
    }


    return 0;
}