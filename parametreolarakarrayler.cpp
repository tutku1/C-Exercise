#include <stdio.h>

int carp(int matris[], int size) {
	
	int carpim = 1;
	
	int i = 0;
	
	for(; i < size ; i++){
		
		carpim *= matris[i];
	}
	return carpim;
}






int main() {
	
	int sayilar[5] = {1,2,3,4,5};
	
	printf("%d", carp(sayilar, 5)); // ekstra olarak boyut bilgisini verdik
}
