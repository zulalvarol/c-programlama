// Kullan�c�n�n girdi�i iki say� aras�ndaki asal say�lar� ve bu aral�ktaki
// asal say�lar�n adedini ekrana yazd�r�r.

#include <stdio.h>

main () {
     
     int sayi1, sayi2, i, bolen, asal, adet = 0;

     printf ("Sayi araligini giriniz: ");
     scanf ("%d %d", &sayi1, &sayi2);
     
     for (i=sayi1; i<=sayi2; i++) {
         asal = 1;
         for (bolen=2; bolen<i/2; bolen++) {
             if (i % bolen == 0) {
                 asal = 0; 
                 break;
             }
         }
         
         if (asal == 1 && i >= 2) {
            printf ("%d ", i);
            adet ++;
         }
     }
     
     printf ("\n%d ve %d arasinda %d tane asal sayi vardir.", sayi1, sayi2, adet);
     getch ();
}
