#include <stdio.h>
#include <string.h>

int main(){ 
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";

    // membandingkan dua string secara karakter per karakter
    // 0 = kedua string sama persis
    // <0 atau -1 = string lebih kecil (secara ASCII) dari string pembandingnya
    // >0 atau = string lebih besar dari string
     
    // Compare string 1 dan string 2
    printf("%d\n",strcmp(str1, str2));

    // Compare string 1 dan string 3
    printf("%d\n",strcmp(str1, str3));

    return 0;
}