#include<stdio.h>
// �ok boyutlu arraylerin g�nderilmesi
//bu kodda hatta var


void bastir(int matris[][4], int size){ //�ok boyutlu array oldu�unu s�yledik
	
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
	
	
	bastir(matris,3); //sat�r boyutunu boyut bilgisi olarak g�nderiyoruz
	
	
	
}
