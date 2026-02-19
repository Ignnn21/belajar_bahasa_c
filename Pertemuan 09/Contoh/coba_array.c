#include <stdio.h>

int main(){
    int numbers[5] = {97,68,64,25,584};
    printf("Numbers[0] = %d\n",numbers[0]);
    printf("Numbers = %p\n",(void*)numbers);
    printf("&Numbers[0] = %p\n",(void*)&numbers[0]);

    // Akses Array
    for (int i = 0; i<=5; i++){
        printf("Nilai ke-%d = %d\n", (i+1), numbers[i]);
    }

    // Update Indeks Array
    numbers[1]=17;
    printf("\n\nNilai indeks array setelah dirubah\n");
    for(int i = 0; i <=5; i++ ){
        printf("Nilai ke-%d = %d\n", (i+1), numbers[i]);
    }
    return 0;
}