#include<stdio.h>
main(){
       
       int i, sayi;
       
       printf("Lutfen bir rakam giriniz: ");
       scanf("%d",&sayi);
       
       for(i=0; i<=10; i++){
       printf("\n%d x %d = %d",sayi, i, (sayi*i));         
       
       }
       
       getch();
       }
