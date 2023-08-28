#include<stdio.h>

void hatayibas(int hata){
	printf("Hata kodu %d", hata);
}

int main(){
	
	int sayi;
	printf("lutfen negatif olmayan bir sayi girininiz: ");
	scanf("%d", &sayi);
	
	if (sayi < 0){
		hatayibas(404);
	}
	else{
		printf("tebrikler");
	}
	return 0;
}
