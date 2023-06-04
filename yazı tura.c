// Madeni parayý kullanýcýnýn belirttiði adet kadar atar, 
// yazý tura yüzdelerini gösterir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
     
     int sayi, adet, i, yazi=0, tura=0;
     
     srand(time(NULL));
     
     printf ("Kac kez para atmak istiyorsunuz: ");
     scanf ("%d", &adet);
     
     for (i=1; i<=adet; i++) {
         
         sayi = rand () % 2;
         
         if (sayi == 0)
            tura ++;
         else
            yazi ++;
     
     }

     printf ("Tura yuzdesi = %.2f\n", 100*(float)tura/adet);
     printf ("Yazi yuzdesi = %.2f\n", 100*(float)yazi/adet);
     
     getch ();
}
