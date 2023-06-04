#include<stdio.h>
main(){
       long long int sayi;
       int dizi[20]={0}, sira=0, i,j, depo;
       
       printf("sayi giriniz: ");
       scanf("%lld",&sayi);
       
       do{
       dizi[sira] = sayi % 10;
       sayi = sayi / 10; 
       sira++;    
       }while(sayi!=0);
       
       printf("Olusturulabilecek en buyuk sayi: ");
       
       for(i=0; i<sira; i++)
           for(j=0; j<sira-1; j++){
               if(dizi[j] < dizi[j+1]){
               depo = dizi[j+1];
               dizi[j+1] = dizi[j];
               dizi[j] = depo;
               }
           }
           
       for(i=0; i<sira; i++)
           printf("%d",dizi[i]);
           
       getch();
       }
