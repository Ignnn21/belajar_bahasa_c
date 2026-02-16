#include <stdio.h>
#include <string.h>

int main() {
    char obat[] = "Paracetamol,Amoxicillin,Ibuprofen,Melformin,VitaminC";

    int i = 0;
    int jumlah = 0;
    int karakter = 0;

    char *first = obat;
    char *last = obat;

    printf("Nama obat:\n");

    for (; i < strlen(obat); i++) {

        // awal kata
        if (i == 0 || obat[i - 1] == ',') {
            jumlah++;
            last = &obat[i];
        }

        if (obat[i] != ',')
            karakter++;

        // cetak
        if (obat[i] == ',') {
            printf("\n");
        } else {
            char c = obat[i];
            if (c >= 'a' && c <= 'z')
                c -= 32;
            printf("%c", c);
        }
    }

    // obat pertama
    printf("\n\nObat pertama : ");
    for (; first[i] != ',' && first[i] != '\0'; i++) {
        char c = first[i];
        if (c >= 'a' && c <= 'z') {
            c -= 32;
        }
        printf("%c", c);
    }

    // obat terakhir
    printf("\nObat terakhir: ");
    for (; last[i] != ',' && last[i] != '\0'; i++) {
        char c = last[i];
        if (c >= 'a' && c <= 'z') c -= 32;
        printf("%c", c);
    }

    printf("\n\nJumlah obat      : %d", jumlah);
    printf("\nJumlah karakter  : %d\n", karakter);

    return 0;
}
