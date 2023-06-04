#include<stdio.h>
main(){
       
       int s1, s2, i, j, toplam1=0, toplam2=0;
       
       printf("2 sayi gir: ");
       scanf("%d %d", &s1, &s2);
       
       for(i=1; i<s1; i++){
            if(s1 % i == 0)
            toplam1 = toplam1+i;
      }
       
       for(j=1; j<s2; j++){
           if(s2 % j == 0)
           toplam2 = toplam2 + j;         
       }

       if(s1==toplam2 && s2==toplam1)
       printf("%d ve %d arkadas sayidir.",s1,s2);
       
       else
       printf("%d ve %d arkadas sayi degildir.",s1,s2);
       
       getch();
       }
