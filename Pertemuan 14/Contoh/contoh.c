#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello Word";

    // Output string
    printf("Print string : %s\n",str);

    // Akses string
    printf("Akses string : %c\n", str[0]);

    // Modifikasi string
    str[0]='J';
    printf("Modify indeks str : %s\n",str);
    return 0;
}