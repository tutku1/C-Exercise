#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int T=1;
int K=2;
int M=3;
int i;
int Oyuncu =0;
int Bilgisayar =0;
int secim;
srand(time(NULL));
printf("Tas=1 , Kagit= 2, ve Makas= 3n");
for(i=0;i<5;i++){
printf("Seciminizi Girin:");
scanf("%d",&secim);
int bilgisayar=rand()%3+1;
if(secim==1){
if(bilgisayar==1){
printf("Berabere Bittin");
}
if(bilgisayar==2){
printf("Bilgisayar Kazandin");
bilgisayar= bilgisayar + 1;
}
if(bilgisayar==3){
printf("Oyuncu Kazandin");
Oyuncu = Oyuncu + 1;
}
}
else  if(secim==2){
if(bilgisayar==2){
printf("Berabere Bittin");
}
if(bilgisayar==3){
printf("Oyuncu Kazandin");
Oyuncu = Oyuncu + 1;
}
if(bilgisayar==1){
printf("Bilgisayar Kazandin");
Bilgisayar= Bilgisayar + 1;
}
}
else if(secim==3){
if(bilgisayar==3){
printf("Drawn");
}
if(bilgisayar==2){
printf("Bilgisayar Kazandin");
Bilgisayar= Bilgisayar + 1;
}
if(bilgisayar==1){
printf("Oyuncu Kazandin");
Oyuncu = Oyuncu + 1;
}
}
else{
printf("Hatali Giris Yaptinizn");
}
}
if(Bilgisayar > Oyuncu ){
printf("Bilgisayar Kazandi %d to %dn",Bilgisayar,Oyuncu);
}
else if(Bilgisayar < Oyuncu ){
printf("Oyuncu Kazandi %d to %dn",Oyuncu,Bilgisayar);
}
else if(Bilgisayar =  Oyuncu ){
printf("Kazanan Yok Berabere Bittin");
}
return 0;
}


