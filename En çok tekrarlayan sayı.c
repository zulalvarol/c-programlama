#include<stdio.h>
main(){
       int dizi[10]={0}, sayi=-1, i, j, encok=0, tekrar=0;
// 1 2 3 2 4 3 3 2 2 6        
       printf("on tane tam sayi giriniz: ");
       
       for(i=0; i<10; i++){
           scanf("%d",&dizi[i]);
       }
       for(i=0; i<10; i++){
                tekrar=0;
                for(j=0; j<10; j++)
                   if(dizi[j]==dizi[i])
                   tekrar++;
                   
                   if(tekrar>encok){
                   encok=tekrar;
                   sayi=dizi[i];                 
                   }
             
       }
      printf("en cok tekrar eden sayi: %d ",sayi);
       getch();
       }
