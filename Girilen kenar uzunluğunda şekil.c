#include <stdio.h>

main () {
     
     int dis, ic, x, i, j;
     
     printf ("Kenar boyutlarini giriniz: ");
     scanf ("%d %d", &dis, &ic);
     printf ("\n");
     
     x = (dis - ic) / 2;
     
     for (i=1; i<=dis; i++) { 
         for (j=1; j<=dis; j++) {
             
             if (i<=x || i>dis-x || j<=x || j>dis-x)
                printf ("0 ");
             else
                printf ("X "); 

         }  
         printf ("\n");
     }      
     
     getch ();

}
