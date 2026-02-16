#include <stdio.h>
#include <string.h>
// salah
int main (){
    char obat[] = "Paracetamol,Amoxicillin,Ibuprofen,Melformin,VitaminC";
    char *f=obat,*e=obat;
    int jumlah = 0, k = 0; 

    for(int i = 0; i < strlen(obat); i++){
        if(obat[i] != ','){
            k++;
        }
        if(i == 0 || obat[i-1]==','){
            e = &obat[i];
        }
    }

    char *t = strtok(obat,",");

    printf("Nama obat :\n");
    
    while(t != NULL){
        printf("%s\n",strupr(t));
        t = strtok(NULL, ",");
        jumlah += 1;
    } 


    printf("\n\nObat pertama : %s\n", strupr(f));
    printf("Obat terakhir : %s\n", strupr(e));

    printf("Jumlah obat : %d\n",jumlah);
    printf("Jumlah karakter : %d",k);
   
    return 0;
}