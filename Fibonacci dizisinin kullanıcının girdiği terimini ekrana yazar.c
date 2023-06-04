// Fibonacci dizisinin kullanýcýnýn girdiði terimini ekrana yazar

#include <stdio.h>

main () {
  
     int terim, i, m=1, n=1, depo;
     
     printf ("Terim numarasini giriniz: ");
     scanf ("%d", &terim);
     
     for (i=1; i<=terim; i++) {
         
         depo = m;
         m = n;
         n = n + depo;
         
     }
     
     printf ("Fibonacci dizisinin %d. terimi = %d", terim, depo);

     getch ();
}
