#include<stdio.h>

int main(){
	int a[3][3];
	int i,j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("matrisinizin %d. sati %d. sutunda yer almasýný istediginiz sayiyi giriniz: ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
	printf("matrisinizin goruntusu su sekilde olacak:\n\t");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d", a[i][j]);
		}
		printf("\n\t");
	}
	return 0;
}
