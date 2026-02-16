#include <stdio.h>
int main() {
 int a, b;
 printf("Masukkan bilangan pertama: ");
 scanf("%d", &a);
 printf("Masukkan bilangan kedua: ");
 scanf("%d", &b);
 if (a == b) {
 printf("%d sama dengan %d\n", a, b);
 } else {
 if (a > b) {
 printf("%d lebih besar dari %d\n", a, b);
 } else {
 printf("%d lebih kecil dari %d\n", a, b);
 }
 }
 return 0;
}