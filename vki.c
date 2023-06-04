#include<stdio.h>
main(){
       
       int kilo, bkare;
       float boy, vki;
       
       printf("lutfen kilonuzu (kg) giriniz: ");
       scanf("%d",&kilo);
       printf("lutfen boyunuzu metre olarak giriniz: ");
       scanf("%f",&boy);
       
       vki=kilo/(boy*boy);
       
       if(vki<=18.5)
       printf("Vucut kitle indeksiniz: %f - ZAYÝF",vki);
       
       else if(vki<=24.9 )
       printf("Vucut kitle indeksiniz: %f - NORMAL",vki);
       
       else if(vki<=29.9 )
       printf("Vucut kitle indeksiniz: %f - FAZLA KÝLOLU",vki);
       
       else if(vki>=39.9)
       printf("Vucut kitle indeksiniz: %f - OBEZ",vki);
       
       
       getch();
       }
