#include <stdio.h> 

struct barang{
    char nama[50];
    int harga;
    int diskon;
};

int main(){
    struct barang b;
    printf("===== TOKO JAYA ABADI =====\n");
    printf("Nama barang : ");
    scanf(" %[^\n]", b.nama);
    printf("Harga normal : ");
    scanf("%d", &b.harga);
    printf("Diskon(%%): ");
    scanf("%d", &b.diskon);

    printf("===========================\n");
    printf("Nama barang : %s\n", b.nama);
    printf("Harga normal : %d\n", b.harga);
    printf("Diskon : %d%%\n", b.diskon);
    printf("Total diskon : %d\n", b.harga * b.diskon/100);
    printf("Harga akhir : %d\n", b.harga -(b.harga * b.diskon/100));


    return 0;
}