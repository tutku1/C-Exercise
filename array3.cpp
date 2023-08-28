#include<stdio.h>

int main()
 {
	float toplam = 0.0;
	float sayilar[2];
	int i;
	
	for (i=0; i < 2; i++){
		printf("Bir sayi giriniz:");
		scanf("%f", &sayilar[i] );
	}
	for(i=0 ; i < 5 ; i++){
		toplam += sayilar[i]; 
	}
	
	printf("girdiðiniz sayilarin aritmetik ortlamasi %.2f'dir", toplam/5);
}
