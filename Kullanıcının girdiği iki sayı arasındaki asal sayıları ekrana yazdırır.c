// Kullanýcýnýn girdiði iki sayý arasýndaki asal sayýlarý ekrana yazdýrýr.

#include <stdio.h>

main () {
     
     int sayi1, sayi2, i, bolen, asal;

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
         
         if (asal == 1 && i >= 2)
            printf ("%d ", i);
     }
     
     getch ();
}
