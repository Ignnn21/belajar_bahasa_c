#include <stdio.h>
#include <stdlib.h>

struct titik {
    int x;
    int y;
};

struct titik inputTitik() {
    struct titik t;
    printf("Masukkan nilai x: ");
    scanf("%d", &t.x);
    printf("Masukkan nilai y: ");
    scanf("%d", &t.y);
    return t;
}

int hitungJarak(struct titik a, struct titik b) {
    int selisihx = abs(a.x - b.x);
    int selisihy = abs(a.y - b.y);
    return selisihx + selisihy;   
}

int main() {
    struct titik t1, t2;

    printf("Input titik pertama:\n");
    t1 = inputTitik();
    printf("\nInput titik kedua:\n");
    t2 = inputTitik();

    printf("\nJarak antara dua titik = %d\n", hitungJarak(t1, t2));

    return 0;
}
