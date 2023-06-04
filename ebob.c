// Kulanýcýnýn girdiði iki sayýnýn EKOK'unu hesaplar. (for döngüsü ile)

#include <stdio.h>

main () {
     
     int sayi1, sayi2, i, ekok;
     
     printf ("Iki sayi giriniz: ");
     scanf ("%d %d", &sayi1, &sayi2);
          
     for (i=sayi1*sayi2; i>=sayi1; i--)     
           if (i%sayi1 == 0 && i%sayi2 == 0)
              ekok = i;           

     printf ("EKOK(%d,%d) = %d", sayi1, sayi2, ekok);  
     getch ();
}
