#include <stdio.h>
// Prosedur untuk menghitung dan menampilkan nilai akhir mahasiswa
void hitungNilaiAkhir(float tugas, float uts, float uas) {
 float nilai_akhir;
 nilai_akhir = (tugas * 0.3) + (uts * 0.3) + (uas * 0.4);
 printf("\n=== HASIL NILAI AKHIR ===\n");
 printf("Nilai Tugas : %.2f\n", tugas);
 printf("Nilai UTS : %.2f\n", uts);
 printf("Nilai UAS : %.2f\n", uas);
 printf("Nilai Akhir : %.2f\n", nilai_akhir);

 // Menentukan kategori nilai
 if (nilai_akhir >= 85)
 printf("Predikat : A\n");
 else if (nilai_akhir >= 75)
 printf("Predikat : B\n");
 else if (nilai_akhir >= 65)
 printf("Predikat : C\n");
 else if (nilai_akhir >= 50)
 printf("Predikat : D\n");
 else
 printf("Predikat : E\n");
}

int main() {
 float tugas, uts, uas;
 printf("=== Program Hitung Nilai Akhir Mahasiswa ===\n");
 printf("Masukkan nilai tugas : ");
 scanf("%f", &tugas);
 printf("Masukkan nilai UTS : ");
 scanf("%f", &uts);
 printf("Masukkan nilai UAS : ");
 scanf("%f", &uas);
 
 // Memanggil prosedur
 hitungNilaiAkhir(tugas, uts, uas);
 return 0;
}