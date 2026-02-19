#include <stdio.h>

int main(){

    int numbers[10] = {97,68,64,2584};
    int n = 5;
    int nilaibaru = 10;

    if (n<10){
        numbers[n] = nilaibaru;
        n++;
    }
    else {
        printf("Array sudah penuh\n");
        return 0;
    }

    printf("\n\nData setelah ditambahkan\n");
    for(int i = 0; i<n;i++){
        printf("%d\n",numbers[i]);
    }

    return 0;
}

