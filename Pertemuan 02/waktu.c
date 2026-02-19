#include <stdio.h>
int main(){
    int detik, menit, jam, ddetik;

    printf("Masukan total detik = " );
    scanf(" %d", &detik);

    jam = detik/3600;
    menit = (detik%3600)/60;
    ddetik = (detik%3600)%60;
    
    printf("Jam  = %d jam\n", jam);
    printf("Menit = %d menit\n", menit);
    printf("Detik = %d detik\n", ddetik);
    
    return 0;
}