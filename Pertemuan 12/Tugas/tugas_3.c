#include <stdio.h>

struct Waktu {
    int jam;
    int menit;
    int detik;
};

int waktuKeDetik(struct Waktu w) {
    return (w.jam * 3600) + (w.menit * 60) + w.detik;
}

int hitungBiaya(int lamaDetik) {
    return lamaDetik * 25;   
}

int main() {
    struct Waktu awal, akhir;
    int totalAwal, totalAkhir, lama, biaya;

    printf("Masukkan waktu awal (jam menit detik): ");
    scanf("%d %d %d", &awal.jam, &awal.menit, &awal.detik);
    printf("Masukkan waktu akhir (jam menit detik): ");
    scanf("%d %d %d", &akhir.jam, &akhir.menit, &akhir.detik);

    totalAwal = waktuKeDetik(awal);
    totalAkhir = waktuKeDetik(akhir);

    lama = totalAkhir - totalAwal;

    biaya = hitungBiaya(lama);
    
    printf("Lama percakapan : %d detik\n", lama);
    printf("Total biaya pulsa: Rp %d\n", biaya);

    return 0;
}
