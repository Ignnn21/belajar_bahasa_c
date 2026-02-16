#include <stdio.h>
int main() {
    int angka[5] = {10, 20, 30, 40, 50};
    
    printf("Isi array:\n");

    for (int i = 0; i < 5; i++) {
        printf("angka[%d] = %d\n", i, angka[i]);
    }
 return 0;
}