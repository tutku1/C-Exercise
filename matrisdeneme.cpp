#include <stdio.h>
#include <conio.h>
main()
{
int i,j,n;
float a;
float matris[100][100],matris1[100][100];
printf("matrisin boyutunu giriniz=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
matris[i][j]=0;
}
}
printf("Matrisin elemanlarini satir satir giriniz...\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%f",&a);
matris[i][j]=a;}
}
printf("Matrisin ekrandaki ciktisi\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%2.4f ",matris[i][j]);
}
printf("\n");
}
getch();}
