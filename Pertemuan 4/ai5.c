#include <stdio.h>

int main() {
    float nilai, total = 0;
    int count = 0;

    printf("Masukkan nilai (ketik 0 untuk berhenti): \n");

    // perulangan input nilai
    do {
        printf("Nilai ke-%d : ", count + 1);
        scanf("%f", &nilai);

        if (nilai != 0) {   // 0 jadi tanda berhenti
            total += nilai;
            count++;
        }
    } while (nilai != 0);

    // cek agar tidak bagi nol
    if (count > 0) {
        float rata = total / count;
        printf("\nRata-rata dari %d nilai adalah: %.2f\n", count, rata);
    } else {
        printf("\nTidak ada nilai yang dimasukkan.\n");
    }

    return 0;
}
