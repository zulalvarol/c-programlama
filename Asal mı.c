#include<stdio.h>
main(){
       int sayi, asal=1, i;
       
       printf("lutfen bir sayi giriniz: ");
       scanf("%d",&sayi);
       
       for(i=2; i<sayi; i++){
                if(sayi % i == 0){         
                asal=0;
                break;
                }
       }
       if(asal == 1 && sayi>=2)
       printf("%d sayisi asaldir",sayi);
       
       else
       printf("%d sayisi asal degildir",sayi);
       
       getch();
       }
