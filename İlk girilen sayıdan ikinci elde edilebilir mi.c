#include<stdio.h>
// Girilen iki say�dan birincisinin rakamlar� ile ikincisinin
// elde edilip edilmeyece�ini ekrana yazd�r�r.
main(){
       int ilk[100]={0}, olusurmu[100]={0}, i;
       
       printf("Iki sayi giriniz : ");
       scanf("%d %d", &ilk, &olusurmu);
       
       for(i=0; ilk[i]=='\0'; i++)
           printf("%d ",ilk[i]);
       
       
       getch();
       }
