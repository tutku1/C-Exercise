#include <stdio.h>
#include <conio.h>

int main()
{
  int i,n,sonuc ;
  // degi�kenler tan�mlan�yor.
  
   // integer'e kar��l�k prinf ve scanf'te %d kullan�rl�r.
   
   printf("Bir sayi giriniz :");
   //Kullan�c�dan de�erler al�n�yor..
   
   scanf("%d", &n);
   // %d say�n�n tipini ifade ediyor. & say�sal olanlarda giriliyor.
   //  String bir ifade kullanmak istede�imizde & i�aretini kullanm�yoruz.
   //
   
   sonuc=0;

   for  (i=1; i<=n; i++ )
   
   sonuc = sonuc + i;
   
   printf("istediginiz toplam: %d ", sonuc  );  
   // sonu� ekrana yazd�r�l�yor.. 
    // %f virg�ll� say�lar
    // %s string ifadelerinde kullan�yoruz.
}
