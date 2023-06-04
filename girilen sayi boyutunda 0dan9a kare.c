#include<stdio.h>
main(){
       
       int kenar, i, j, k=0;
       
       printf("kenar boyutunu giriniz: ");
       scanf("%d",&kenar);
       for(i=1; i<=kenar; i++){
           for(j=1; j<=kenar; j++){
                    printf("%d ", k);
                    k++; 
                    
                    if(k==10)
                    k=0;     
           }
           printf("\n");
       }

       
       getch();
       }
