#include<stdio.h>
//input olarak verilen arraydeki en büyük sayýyý verme
int makssayi(int *a, int uzunluk){
	int maks = a[0];
	
	int i;
	
	for(i = 1; i < uzunluk; i++) {
		if(a[i] > maks) {
			 
			 maks = a[i];
		}
	}
	return maks;
}

int main() {
	int sayilar[5];
	
	printf("istediðiniz sayilari giriniz: ");
	scanf("%d", &sayilar);
	
	int maks = makssayi(sayilar, 5);
	
	printf("sayilar dizisinin en büyük elemaný %d dir.", maks);
	
	

	
	return 0;
}
