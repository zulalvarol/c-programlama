// Fibonacci dizisinin kullan�c�n�n girdi�i kadar terimini ekrana yazar

#include <stdio.h>

main () {
  
     int adet, i, m=1, n=1, depo;
     
     printf ("Adet giriniz: ");
     scanf ("%d", &adet);
     
     for (i=1; i<=adet; i++) {
         
         printf ("%d ", m);
         depo = m;
         m = n;
         n = n + depo;
         
     }

     getch ();
}
