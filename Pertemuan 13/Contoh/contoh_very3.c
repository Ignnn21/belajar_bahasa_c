#include <stdio.h>

struct mahasiswa {
    int nim;
    char* nama;
    float ipk;
};

int main() {
    // struct mahasiswa mhs[3];

    // mhs[0].nim = 373638;
    // mhs[0].nama = "marhg";
    // mhs[0].ipk = 2.74;

    // mhs[1].nim = 1973;
    // mhs[1].nama = "fani";
    // mhs[1].ipk = 3.7;

    // mhs[2].nim = 2759;
    // mhs[2].nama = "djdj";
    // mhs[2].ipk = 3.1;

    struct mahasiswa mhs[3] = {
        {2530,"Marlon",3.8},
        {2531,"Fani",4.0},
        {2532,"Fhei",2.0}
    };

    for (int i = 0; i < 3; i++) {
        printf("%d | %-7s | %.2f\n", mhs[i].nim, mhs[i].nama, mhs[i].ipk);
    }

    return 0;
}
