//insertion sort

#include<stdio.h>
#define MAX 50 

void insertionsort(int arr[], int size) {
	int i,j;
	int element;
	
	for(i=1; i<size; i++){
		element = arr[i];
		j = i -1;
		
		while(j >=0 && arr[j] > element){
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j+1] = element;
	}
	
}
