#include <stdio.h>
void Angkatan2010Keatas(){
    int sks;
    printf("Masukkan jumlah SKS semester ini : ");
    scanf("%d",&sks);
    printf("\nJumlah SKS : %d",sks);
    printf("\nBiaya per SKS : Rp.100000");
    printf("\nTotal pembayaran : Rp.%d",sks*100000);
}

void Angkatan2005_2009(){
    int sks;
    printf("Masukkan jumlah SKS semester ini : ");
    scanf("%d",&sks);
    printf("\nJumlah SKS : %d",sks);
    printf("\nBiaya per SKS : Rp.80000");
    printf("\nTotal pembayaran : Rp.%d",sks*80000);
}

void Angkatan2000_2004(){
    int sks;
    printf("Masukkan jumlah SKS semester ini : ");
    scanf("%d",&sks);
    printf("\nJumlah SKS : %d",sks);
    printf("\nBiaya per SKS : Rp.60000");
    printf("\nTotal pembayaran : Rp.%d",sks*60000);
}

void Angkatan1999Kebawah(){
    int sks;
    printf("Masukkan jumlah SKS semester ini : ");
    scanf("%d",&sks);
    printf("\nJumlah SKS : %d",sks);
    printf("\nBiaya per SKS : Rp.40000");
    printf("\nTotal pembayaran : Rp.%d",sks*40000);
}

int main(){
    int tahun;
    printf("PEMBAYARAN SPP UPITRA\n");
    printf("Pilih tahun masuk :\n");
    printf("1. Angkatan 2010 keatas\n");
    printf("2. Angkatan 2005-2009\n");
    printf("3. Angkatan 2000-2004\n");
    printf("4. Angkatan 1999 kebawah\n");
    printf("Masukkan no sesuai dengan tahun masuk : ");
    scanf("%d",&tahun);

    if(tahun==1){
        Angkatan2010Keatas();
    }
    else if(tahun==2){
        Angkatan2005_2009();
    }
    else if(tahun==3){
        Angkatan2000_2004();
    }
    else if(tahun==4){
        Angkatan1999Kebawah();
    }
    else{
        printf("Nomor yang anda masukan salah, silahkan coba lagi");
    }
    return 0;
}