#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
       int rast, tekrar[2][10]={0}, i, j;
       srand(time(NULL));
       
       printf("Rastgele uretilen sayilar :");
       
       for(i=0; i<10; i++){
           tekrar[0][i] = 1 + rand() % 9;
           printf("%d ",tekrar[0][i]);        
       }
       
       for(i=0; i<10; i++){
           for(j=0; j<10; j++){
               if(tekrar[0][i] == tekrar[0][j])
               tekrar[1][i]++; 
                       
           }         
       }
       printf("\nTekrar etmeyen sayilar: ");
       for(i=0; i<10; i++){
           if(tekrar[1][i] == 1)
           printf("%d ",tekrar[0][i]);
       }
       getch();
       }
