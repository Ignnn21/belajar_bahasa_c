#include <stdio.h>
#include <string.h>

struct nilai
{
    char mataKuliah[50];
    int sks;
    float nilai;
    float bobot;
};

struct kodeAkademik
{
    char nama[50];
    char nim[9];
    struct nilai n[3];

};


int main (){
    struct kodeAkademik k;
    strcpy(k.nama, "Marlon");
    strcpy(k.nim, "253016013");
    strcpy(k.n[0].mataKuliah, "Algoritma");
    k.n[0].sks = 3;
    k.n[0].nilai = 88;
    strcpy(k.n[1].mataKuliah, "Pemrograman");
    k.n[1].sks = 4;
    k.n[1].nilai = 70;
    strcpy(k.n[2].mataKuliah, "Jaringan");
    k.n[2].sks = 3;
    k.n[2].nilai = 90;

    float totalSks = 0;
    float totalMut = 0;
    for(int i = 0; i < 3; i++){
        if(k.n[i].nilai >= 85){
            k.n[i].bobot = 4.00;
        }
        else if(k.n[i].nilai >= 75){
            k.n[i].bobot = 3.00;
        }
        else if(k.n[i].nilai >= 65){
            k.n[i].bobot = 2.00;
        }
        else if(k.n[i].nilai >= 55){
            k.n[i].bobot = 1.00;
        }
        else{
            k.n[i].bobot = 0.00;
        }

        totalSks += k.n[i].sks;
        totalMut += (k.n[i].sks * k.n[i].bobot);

    }

    printf("Nama : %s\n",k.nama);
    printf("Nim  : %s\n\n",k.nim);
    printf("Mata Kuliah | Sks | Nilai | Bobot\n");
    for(int i = 0; i < 3; i++){
        printf("%-11s |  %d  | %.2f | %.2f \n",k.n[i].mataKuliah, k.n[i].sks, k.n[i].nilai, k.n[i].bobot);
    }
    printf("\nIPK  : %.2f",totalMut/totalSks);


    return 0;
}