#include <stdio.h>
#include <string.h>

struct pasien
{
    char namap[50];
    char sakit[50];
};

struct dokter
{
    char namad[50];
    char spesialis[50];
    struct pasien p[3];
};

int main(){
    struct dokter d;
    strcpy(d.namad, "Dr. Tirta");
    strcpy(d.spesialis, "Penyakit Dalam");
    strcpy(d.p[0].namap, "Andi");
    strcpy(d.p[0].sakit, "Demam");
    strcpy(d.p[1].namap, "Budi");
    strcpy(d.p[1].sakit, "Tipes");
    strcpy(d.p[2].namap, "Citra");
    strcpy(d.p[2].sakit, "Asam Lambung");

    printf("Dokter    : %s\n",d.namad);
    printf("Spesialis : %s\n\n",d.spesialis);
    printf("Daftar pasien \n");

    for(int i = 0; i < 3; i++){
        printf("%d. %s - %s\n",i+1,d.p[i].namap,d.p[i].sakit);
    }

    return 0;
}