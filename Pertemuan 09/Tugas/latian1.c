#include <stdio.h>

int main(){
    // Deklarasi Variabel
    int data[10]={7,8,5,12,0,15,4,3,7,1};
    int jumlahdata = 0;
    int nilai_tertinggi = data[0];
    int indeks = 0;
    int i,input,cek = 0;

    // Menampilkan Data
    printf("DATA ARRAY==========================\n");
    for(i=0;i<10;i++){
        printf("Data[%d] = %d\n", i,data[i]);
        // Hitung SUM Data
        jumlahdata+=data[i];
    }

    printf("\nJUMLAH SUM========================\n");
    printf("Jumlah SUM Data = %d\n",jumlahdata);

    // Mencari Nilai Tertinggi dan indeks
    for(i=0;i<10;i++){
        if (data[i]>nilai_tertinggi){
            nilai_tertinggi = data[i];
            indeks = i;
        }
    }
    printf("\nNILAI TERTINGGI & INDEKS==========\n");
    printf("Nilai tertinggi dari data tersebut : %d",nilai_tertinggi);
    printf("\nIndeks nilai tertinggi : %d",indeks);

    // Mencari Indeks Berdasarkan Nilai Input 
    printf("\n\nINDEKS INPUT======================");
    printf("\nMasukkan nilai : ");
    scanf("%d",&input);

    for(i=0;i<10;i++){
        if(input==data[i]){
            printf("Indeks array berdasarkan input anda : data[%d]\n",i);
            cek = 1;
        }
    }
    if (cek!=1){
        printf("Input anda tidak ada dalam array.");
    }
    return 0;
}