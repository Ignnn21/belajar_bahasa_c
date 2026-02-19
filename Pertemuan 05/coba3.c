#include <stdio.h>
int main(){
    int a = 1, b;
    while(a<=10){
        b = 1; // Khusus While, deklarasi variabel harus di sini
        while(b<=a){
            printf("%d x %d = %d |",b,a,a*b);
            b++;
        }
        printf("\n");
        a++;
    }
    return 0;
}