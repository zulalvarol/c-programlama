// Girilen 3 basamakl� say�n�n rakamlar� toplam� e�er �iftse 2'ye b�ler, tek ise
// 2 kat�n� alan program.

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
