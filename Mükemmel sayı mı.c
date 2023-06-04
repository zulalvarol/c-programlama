#include<stdio.h>
main(){
      int sayi, i, toplam=0; 
      printf("lutfen bir sayi giriniz: ");
      scanf("%d",&sayi);
      
      for(i=1; i<sayi; i++){
            if(sayi % i == 0)
            toplam = toplam+i;
      }
      if(sayi == toplam)
          printf("%d sayisi mukemmel sayidir",sayi);
              
      else
          printf("%d sayisi mukemmel sayi degildir",sayi);
      
      
      
      getch();
      }
