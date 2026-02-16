#include <stdio.h>
int main(){
    // Deklarasikan variabel
    int a;

    printf("Masukan angka = ");
    scanf(" %d", &a);

    // Cek kondisi
     if (a % 2 == 0){
        if(a > 0){
        printf("%d Merupakan bilangan positif dan termasuk bilangan genap.", a);
        } 
        else if ( a < 0){
        printf("%d Merupakan bilangan negatif dan termasuk bilangan genap.", a);
        }  
        else{
        printf("%d Merupakan 0",a);
        }  
    } 
    else{
        if (a > 0){
        printf("%d Merupakan bilangan positif dan termasuk bilangan ganjil.", a);
        }
        else{
        printf("%d Merupakan bilangan negatif dan termasuk bilangan ganjil.", a);
        }   
    }
    
    return 0;
}