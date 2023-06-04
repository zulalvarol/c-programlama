#include <stdio.h>

void main (void) {
     
     int satir, i, j;

     printf ("Lutfen satir sayisini giriniz: ");
     scanf ("%d", &satir);
     
     for (i=1; i<=satir; i++) {
              
        printf ("\n");
        
        for (j=1; j<=satir; j++) {

           if (j<=i-1)
              printf (" ");  
           else
              printf ("*");
           
        }
                                     
     }
        
     getch ();
     return ;
                     
}
