#include <stdio.h>
#include <string.h>

struct nama
{
    char nama[30];
};

int main(){
    struct nama n[2];
    printf("Program pembanding string :\n");
    printf("------------------------------------------------------\n");

    for(int i = 0; i < 2; i++){
        printf("Input string ke-%d : ", i+1);
        scanf(" %[^\n]", n[i].nama);
    }

    printf("\n");
    for(int i = 0; i < 2; i++){
        printf("String %d : %s\n",i+1, n[i].nama);
    }
    
    if(strcmp(n[0].nama, n[1].nama) == 0){
        printf("String sama.");
    }
    else{
        printf("String beda.");
    }
    return 0;
}