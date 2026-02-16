#include <stdio.h> 

struct nilaiUjian
{
 char nama[50];
 float nilaiMath;
 float nilaiSisdig;
 float nilaiPd;
};

int main(){
    struct nilaiUjian m;
    printf("\n====== INPUT NILAI MAHASISWA ======\n");
    printf("Nama Mahasiswa : ");
    scanf(" %[^\n]", m.nama);
    printf("Nilai matematika diskrit : ");
    scanf("%f", &m.nilaiMath);
    printf("Nilai sistem digital : ");
    scanf("%f", &m.nilaiSisdig);
    printf("Nilai pemrograman dasar : ");
    scanf("%f", &m.nilaiPd);
    
    printf("\n====== OUTPUT NILAI ======\n");
    printf("Nama Mahasiswa : %s\n", m.nama);
    printf("Nilai matematika diskrit : %.2f\n", m.nilaiMath);
    printf("Nilai sistem digital : %.2f\n", m.nilaiSisdig);
    printf("Nilai pemrograman dasar : %.2f\n", m.nilaiPd);
    

    return 0;
}