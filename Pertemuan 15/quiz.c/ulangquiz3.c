#include <stdio.h>

struct kebun
{
    char kebun[20];
    int luas;
    char jenis[20];
};

int main(){
    struct kebun k[3] = {
        {"Kebun A",5,"Padi"},
        {"Kebun B",3,"Jagung"},
        {"Kebun C",7,"Kedelai"}
    };

    printf("-----------------------------------\n");
    printf("|%-10s|%-8s|%-13s|\n","Nama Kebun","Luas(ha)","Jenis Tanaman");
    printf("-----------------------------------\n");
    
    int total = 0;
    for(int i = 0; i < 3; i++){
        printf("|%-10s|%-8d|%-13s|\n",k[i].kebun,k[i].luas,k[i].jenis);
        total += k[i].luas;
    }

    printf("-----------------------------------\n");
    printf("Total luas seluruh kebun : %d hektare",total);
    return 0;
}