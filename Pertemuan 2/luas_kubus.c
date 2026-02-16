#include <stdio.h>
int main(){
    float sisi, luas;

    printf("Masukan sisi kubus = " );
    scanf(" %f", &sisi);
     
    luas = 6*(sisi*sisi);
    printf("Luas kubus = %.2f", luas);
    
    return 0;
}