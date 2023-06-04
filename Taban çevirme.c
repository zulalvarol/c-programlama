#include<stdio.h>
main(){
       int taban, sayi, i, deger=0, sayac=0, sonuc=0, kat=0,us=1, toplam=0;
       
       printf("Sayi ve taban giriniz: ");
       scanf("%d %d", &sayi, &taban);
       
           while(sayi>0){
               deger = sayi % 10;
               sayi = sayi / 10;
               
               if(sayac == 0){
                   sonuc=deger*1; 
                   toplam=toplam+sonuc;           
               }
               
               if(sayac>0){
               sonuc=0;
               us=1;
                   for(i=1; i<=sayac; i++){
                         us = us * taban;     
                   }
                   sonuc=deger*us;
                   toplam=toplam+sonuc;
               }
               sayac++;
               
           } 
           

       printf("Sonuc: %d",toplam);    
       
       
       getch();
       }
