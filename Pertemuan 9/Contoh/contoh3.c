#include <stdio.h>
int main() {
    int angka[5] = {10, 20, 30, 40, 50};
    printf("Sebelum update: %d\n", angka[2]);
    
    angka[2] = 100; // ubah elemen indeks ke-2
    printf("Setelah update: %d\n", angka[2]);

    for(int i = 0; i<5; i++){
        printf("%d ", angka[i]);
    }
    return 0;
}
