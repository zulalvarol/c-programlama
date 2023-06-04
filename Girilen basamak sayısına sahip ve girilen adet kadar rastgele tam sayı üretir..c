// Girilen basamak sayýsýna sahip ve girilen adet kadar rastgele tam sayý üretir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
  
     int basamak, adet, i, j, rastgele;
     srand(time(NULL));
     
     printf ("Once basamak sonra adet degerlerini giriniz: ");
     scanf ("%d %d", &basamak, &adet);
     printf ("\n");
     
     for (j=1; j<=adet; j++) {
     
         for (i=1; i<=basamak; i++) {
             
             if (i==1)
                rastgele = 1 + rand () % 9;
             else
                rastgele = rand () % 10;
             
             printf ("%d", rastgele);
         
         }
         printf ("\n");
     }
   
     getch ();
}
