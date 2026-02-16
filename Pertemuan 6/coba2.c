#include <stdio.h>
void LuasPersegiPanjang(float panjang, float lebar){
        float luas = panjang * lebar;
        printf("Luas persegi panjang adalah = %.2f\n",luas);
    }
int main(){
    float p,l;
    printf("Masukan panjang = ");
    scanf("%f",&p);
    
    printf("Masukan lebar = ");
    scanf("%f",&l);

    LuasPersegiPanjang(p,l);
    return 0;
}