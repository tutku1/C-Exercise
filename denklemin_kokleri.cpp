#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	float x1, x2;
	float delta;
	printf("denklemi giriniz: ");
	scanf("%d %d %d" , &a, &b, &c);
	
	delta = ((b*b)- (4*a*c));
	x1 = ((-b) + (sqrt(delta)))	/ 2*a;
	x2 = ((-b) + (sqrt(delta)))	/ 2*a;
	
	printf("denklemin 1. koku %f, denklemin ikinci koku %f", x1, x2);

}
