// Yanl�� cevap verilene kadar tek haneli rastgele iki 
// rakam�n toplam�n� soran ve en sonunda verilen
// toplam do�ru cevap say�s�n� g�steren program yaz�n�z.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () { 
     
     int rakam1, rakam2, cevap, adet = 0;
     
     srand(time(NULL));
     
     while (1) {
           
           rakam1 = rand () % 10;
           rakam2 = rand () % 10;
           
           printf ("%d + %d = ", rakam1, rakam2);
           scanf ("%d", &cevap);
           
           if (cevap != rakam1 + rakam2)
              break;
              
           adet ++;
           
     }
     
     printf ("Dogru cevap sayisi = %d", adet);
     getch ();
        
}
