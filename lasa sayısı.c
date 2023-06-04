#include<stdio.h>

main(){
      int sayi, i, lasa=0, toplam=0, son=0, sayac=0, ters=0, depo=0;
      
      printf("Lutfen bir sayi giriniz: ");
      scanf("%d",&sayi);
      depo=sayi;
      
      while(sayi>0){
          son = sayi%10;
          sayi=sayi/10;       
          sayac++;
          toplam = toplam + son; 
          toplam = toplam * 10;   
      }
      ters=toplam/10;

      for(i=2; i<ters; i++){
          if(ters % i == 0)
              lasa=1;
      }
      if(lasa==0)
          printf("%d sayisi LASA sayisidir.",depo);
      else
          printf("%d sayisi LASA sayisi degildir.",depo);
      getch();
      }
