#include<stdio.h>
//arraydeki en b�y�k say�y� verme
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
	int sayilar[5] = {3, 8, 4, 9,46};
	
	int maks = makssayi(sayilar, 5);
	
	printf("sayilar dizisinin en b�y�k eleman� %d dir.", maks);
	
	

	
	return 0;
}
