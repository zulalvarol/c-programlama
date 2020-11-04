// Girilen 3 basamaklý sayýnýn rakamlarý toplamý eðer çiftse 2'ye böler, tek ise
// 2 katýný alan program.

#include<stdio.h>

main(){
       
       int sayi, b1, b2, b3, toplam;
       
       printf("Lutfen bir sayi giriniz: ");
       scanf("%d",&sayi);
       
       b1 = sayi/100;
       b2 = (sayi/10)%10;
       b3 = sayi%10;
       
       toplam = b1 + b2 + b3;
       
       if(toplam%2==0)
       printf("Sonuc: %d", (toplam/2));
       
       else
       printf("Sonuc: %d", (toplam*2));
       
       
       getch();
       }
