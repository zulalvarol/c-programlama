#include<stdio.h>
// Girilen iki sayýdan birincisinin rakamlarý ile ikincisinin
// elde edilip edilmeyeceðini ekrana yazdýrýr.
main(){
       int ilk[100]={0}, olusurmu[100]={0}, i;
       
       printf("Iki sayi giriniz : ");
       scanf("%d %d", &ilk, &olusurmu);
       
       for(i=0; ilk[i]=='\0'; i++)
           printf("%d ",ilk[i]);
       
       
       getch();
       }
