#include<stdio.h>

int main() {

 int a,b,c,d,e;
 float aritmetik_ortalama;
 
 printf("enter numbers: ");
 scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
 
 aritmetik_ortalama=((a + b + c + d + e) / 5);
 printf("sayilarin aritmetik ortalamasi %f'dir", aritmetik_ortalama );
 

}
