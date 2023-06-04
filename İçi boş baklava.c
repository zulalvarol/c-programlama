#include <stdio.h>

main () {
     
     int kenar, i, j;

     printf ("Lutfen bir kenardaki karakter sayisini giriniz: ");
     scanf ("%d", &kenar);
     
     for (i=1; i<=kenar; i++) {
              
        printf ("\n");
        
        for (j=1; j<=kenar-i; j++)
           printf (" ");
        
        for (j=1; j<=2*i-1; j++) {
           
           if(j==1 || j==2*i-1)
              printf ("*");    
           else
              printf (" ");
        
        }  
           
     }
        
     for (i=1; i<=kenar-1; i++) {
              
        printf ("\n");
        
        for (j=1; j<=i; j++)
           printf (" ");
        
        for (j=1; j<=2*(kenar-i)-1; j++) {

           if(j==1 || j==2*(kenar-i)-1)
              printf ("*");    
           else
              printf (" ");     
           
        }
           
     } 

     getch ();
                     
}
