#include <stdio.h>
int main() {
    int angka[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 1; // hapus elemen indeks ke-1 (nilai 20)

    for (int i = pos; i < n - 1; i++) {
        angka[i] = angka[i + 1];
    }
    n--; // kurangi jumlah elemen

    printf("Array setelah delete:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", angka[i]);
    }
    return 0;
}
 