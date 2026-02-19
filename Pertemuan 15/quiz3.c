#include <stdio.h>

struct kebun
{
    char nama[30];
    int luas;
    char jenis[30];
};

int main(){
    struct kebun k[3] = {
        {"Kebun A",5,"Padi"},
        {"Kebun B",3,"Jagung"},
        {"Kebun C",7,"Kedelai"},
    };

    int jumlah = 0;
    printf("|%-12s|%-12s|%-15s|\n","Nama Kebun","Luas(ha)","Jenis Tanaman");
    for(int i = 0; i<3; i++){
        printf("|%-12s|%-12d|%-15s|\n",k[i].nama,k[i].luas,k[i].jenis);
        jumlah += k[i].luas;
    }
    printf("\nLuas seluruh kebun : %d hektare\n\n",jumlah);

    return 0;
}
