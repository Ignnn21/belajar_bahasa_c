#include <stdio.h>
void cekKategori(int sistolik, int diatolik){
    if(sistolik<120 && diatolik<80){
    printf("Kategori : Normal");
    }
    else if(120<=sistolik && sistolik<=139 || 80<=diatolik && diatolik<=89){
        printf("Kategori : Prehipertensi");
    }
    else if(140<=sistolik && sistolik<=159 || 90<=diatolik && diatolik<=99){
        printf("Kategori : Hipertensi tingkat 1");
    }
    else{
        printf("Kategori : Hipertensi tingkat 2");
    }
   
}

int main(){
    int sistolik, diastolik;
    printf("PROGRAM KATEGORI TEKANAN GOLONGAN DARAH\n");
    printf("Masukkan tekanan sistolik (mnHg) : ");
    scanf("%d",&sistolik);
    printf("Masukkan tekanan diastolik (mnHg) : ");
    scanf("%d",&diastolik);
    cekKategori(sistolik, diastolik);
    return 0;
}