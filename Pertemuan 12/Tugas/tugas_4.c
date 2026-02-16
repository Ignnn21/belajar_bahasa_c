#include <stdio.h>

struct Waktu {
    int jam;
    int menit;
    int detik;
};

int waktuKeDetik(struct Waktu w) {
    return (w.jam * 3600) + (w.menit * 60) + w.detik;
}

int hitungBiaya(int lamaDetik, int operator) {
    int biaya = 0;
    int duaMenit = 120; 

    if (operator == 1) {
        if (lamaDetik <= duaMenit) {
            biaya = lamaDetik * 15;
        } else {
            biaya = (duaMenit * 15) + ((lamaDetik - duaMenit) * 3);
        }
    } else {
        if (lamaDetik <= duaMenit) {
            biaya = lamaDetik * 30;
        } else {
            biaya = (duaMenit * 30) + ((lamaDetik - duaMenit) * 10);
        }
    }
    return biaya;
}

int main() {
    struct Waktu awal, akhir;
    int totalAwal, totalAkhir, lama, biaya, operator;

    printf("Masukkan waktu awal (jam menit detik): ");
    scanf("%d %d %d", &awal.jam, &awal.menit, &awal.detik);

    printf("Masukkan waktu akhir (jam menit detik): ");
    scanf("%d %d %d", &akhir.jam, &akhir.menit, &akhir.detik);

    printf("Apakah sesama operator? (1 = ya, 0 = tidak): ");
    scanf("%d", &operator);

    totalAwal = waktuKeDetik(awal);
    totalAkhir = waktuKeDetik(akhir);

    lama = totalAkhir - totalAwal;

    biaya = hitungBiaya(lama, operator);

    printf("\nLama percakapan: %d detik\n", lama);
    printf("Total biaya pulsa: Rp %d\n", biaya);

    return 0;
}
