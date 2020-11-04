// Girilen 4 basamaklý sayýnýn rakamlarý toplamý çarpýmýndan büyükse tarkan sayýsýdýr.
#include<stdio.h>
main(){
       
       int sayi, b1, b2, b3, b4, toplam, carpim;
       
       printf("Lutfen bir sayi giriniz: ");
       scanf("%d",&sayi);
       
       b1=sayi/1000;
       b2=(sayi/100)%10;
       b3=(sayi/10)%10;
       b4=sayi%10;
       
       toplam=b1+b2+b3+b4;
       carpim=b1*b2*b3*b4;
       
       if(toplam>carpim)
       printf("\nTarkan sayisidir.");
       
       else
       printf("\nTarkan sayisi degildir.");
       
       
       getch();
       }
