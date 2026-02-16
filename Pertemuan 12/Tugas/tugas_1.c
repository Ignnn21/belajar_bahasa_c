#include <stdio.h>
#include <stdlib.h>

struct titik
{
    int x, y;
};

int main(){
    int a,b,c,d;
    printf("Masukkan lokasi titik x (x,y): ");
    scanf("%d %d",&a,&b);
    printf("Masukkan lokasi titik y (x,y): ");
    scanf("%d %d",&c,&d);

    struct titik t1 =  {a,b};
    struct titik t2 =  {c,d};
    
    // int jarak = t1.x-t2.x t1.y-t2.y;
    printf("Jarak antara titik x dengan titik y adalah (%d,%d)",abs(t1.x-t2.x), abs(t1.y-t2.y));
    
    
    
    return 0;
}