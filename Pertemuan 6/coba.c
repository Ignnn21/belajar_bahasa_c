#include <stdio.h>
int main(){
    int nilai1, nilai2;
    void Tukar (int *A, int *B);
    printf("Masukan nilai pertama = ");
    scanf("%d",&nilai1);

    printf("Masukan nilai kedua = ");
    scanf("%d",&nilai2);

    printf("\nNilai satu sebelum pertukaran = %d",nilai1);
    printf("\nNilai dua sebelum pertukaran = %d\n",nilai2);

    Tukar(&nilai1, &nilai2);

    printf("\nNilai satu setelah pertukaran = %d",nilai1);
    printf("\nNilai dua setelah pertukaran = %d",nilai2);
    return 0;
}
void Tukar(int *A, int *B){
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;

}