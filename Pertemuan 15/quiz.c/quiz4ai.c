#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
    char obat[] = "Paracetamol,Amoxicillin,Ibuprofen,Melformin,VitaminC";

    int jumlah = 0; 
    int total_karakter = 0;

    char *first = obat;   // alamat obat pertama
    char *last = obat;    // alamat obat terakhir

    printf("DAFTAR OBAT (Huruf Kapital):\n");

    // Menampilkan obat dan menghitung
    for(int i = 0; i < strlen(obat); i++){

        // Menemukan awal kata
        if(i == 0 || obat[i-1] == ','){
            jumlah++;

            if(jumlah == 1){

                first = &obat[i];
            }

            last = &obat[i];
        }

        // Hitung karakter selain koma
        if(obat[i] != ',')
            total_karakter++;

        // Cetak huruf besar
        if(obat[i] == ',')
            putchar('\n');
        else
            putchar(toupper(obat[i]));
    }

    printf("\n");

    // CETAK OBAT PERTAMA
    printf("\nObat pertama : ");
    int i = 0;
    while(first[i] != ',' && first[i] != '\0'){
        putchar(toupper(first[i]));
        i++;
    }

    // CETAK OBAT TERAKHIR
    printf("\nObat terakhir: ");
    i = 0;
    while(last[i] != ',' && last[i] != '\0'){
        putchar(toupper(last[i]));
        i++;
    }

    printf("\n\nJumlah obat        : %d", jumlah);
    printf("\nJumlah karakter    : %d\n", total_karakter);

    return 0;
}
