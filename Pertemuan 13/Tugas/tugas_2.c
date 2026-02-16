#include <stdio.h>

struct matakuliah
{
    char kode[30];
    char nama[30];
    int sks;
    float nilai;
    float bobot;

};

int main(){
    struct matakuliah m[5];
    float totalSks = 0;
    float totalMutu = 0;
    for(int i = 0; i < 5; i++){
        printf("Matakuliah %d\n",i+1);
        printf("Masukkan kode mata kuliah : ");
        scanf(" %[^\n]", m[i].kode);
        printf("Masukkan nama mata kuliah : ");
        scanf(" %[^\n]", m[i].nama);
        printf("Masukkan jumlah sks       : ");
        scanf("%d", &m[i].sks);
        printf("Masukkan jumlah nilai     : ");
        scanf("%f", &m[i].nilai);
        if(m[i].nilai >= 85){
            m[i].bobot = 4.00;
        }
        else if(m[i].nilai >= 75){
            m[i].bobot = 3.00;
        }
        else if(m[i].nilai >= 65){
            m[i].bobot = 2.00;
        }
        else if(m[i].nilai >= 55){
            m[i].bobot = 1.00;
        }
        else {
            m[i].bobot = 0.00;
        }
        totalSks += m[i].sks;
        totalMutu += (m[i].sks*m[i].bobot);
        
    }

    printf("====================================================================================\n");
    printf("|| %-15s || %-15s || %-5s || %-10s || %-10s ||\n","Kode Mata Kuliah", "Nama Mata Kuliah", "Jumlah SKS", "Nilai", "Bobot");
    printf("====================================================================================\n");
    
    for(int i = 0; i < 5; i++){
        printf("|| %-16s || %-16s || %-10d || %-10.2f || %-10.2f ||\n", m[i].kode, m[i].nama, m[i].sks, m[i].nilai, m[i].bobot);
        printf("====================================================================================\n");
    }
    
    printf("Total IP Semsester = %.2f",totalMutu/totalSks);
    
    return 0;
}