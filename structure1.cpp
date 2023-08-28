#include<stdio.h>

struct Student{
	char isim[15];
	char soyisim[15];
	int numara;
	int yas;
};

int main() {
	
	struct Student tutku = { "Tutku", "Kaya", 465, 21};
	
	printf("%s %s %d %d", tutku.isim, tutku.soyisim, tutku.numara, tutku.yas);
	
	
	return 0;
}
