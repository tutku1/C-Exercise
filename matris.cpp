//kullan�c�ndan 3'e 5'lik bir matris alarak sat�rlar� toplayan program

#include<stdio.h>

int main(){

int matris[3][5];
int i,j;

for (i =0 ; i < 3; i++){
	for (j = 0; j < 5 ; j++){
		scanf("%d", &matris[i][j]);
	}
}
for (i =0 ; i < 3; i++){
	for (j = 0; j < 5 ; j++){
		scanf("%d", matris[i][j]);
	}
printf("\n");
}


}
//kodda s�k�nt� var
