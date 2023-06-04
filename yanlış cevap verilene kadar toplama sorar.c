// Yanlýþ cevap verilene kadar tek haneli rastgele iki 
// rakamýn toplamýný soran ve en sonunda verilen
// toplam doðru cevap sayýsýný gösteren program yazýnýz.

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
