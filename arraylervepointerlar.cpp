#include<stdio.h>


int main() {
	int sayilar[5] = {1,2,3,4,5};
	
	int *p = sayilar; 
	
	printf("%u\n", *p); 
	printf("%u", *(p+2));
}
