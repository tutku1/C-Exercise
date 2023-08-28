#include<stdio.h>
// çok boyutlu arraylerin gönderilmesi
//bu kodda hatta var


void bastir(int matris[][4], int size){ //çok boyutlu array olduðunu söyledik
	
	int i,j;
	for(i = 0; i < size; i++){
		for (j=0; j<4; j++){
			printf("%d", matris[i][j]);
		}
		printf("\n");
	}
	
	
}


int main(){
	
	int matris[3][4];
	int i,j;
	
	printf("matrisi doldurunuz:");
	
	for (i=0; i < 3; i++){
		for(i = 0; i < 4; i++){
			scanf("%d", &matris[i][j]);
		}
	}
	
	
	bastir(matris,3); //satýr boyutunu boyut bilgisi olarak gönderiyoruz
	
	
	
}
