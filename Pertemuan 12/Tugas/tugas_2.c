#include <stdio.h>

struct Waktu {
    int jam;
    int menit;
    int detik;
};

struct Waktu konversi(int detik) {
    struct Waktu w;
    w.jam = detik / 3600;                 
    detik = detik % 3600;
    w.menit = detik / 60;                 
    w.detik = detik % 60;
    return w;
}

int main() {
    int detik;
    printf("Masukkan total detik : ");
    scanf("%d", &detik);

    struct Waktu hasil = konversi(detik);
    printf("%d detik = %d jam, %d menit, %d detik\n",detik, hasil.jam, hasil.menit, hasil.detik);

    return 0;
}
