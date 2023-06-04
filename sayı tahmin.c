// Bilgisayarın 1-100 arasında tuttuğu bir sayıyı tahmin etme oyunu

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
     
     int sayi, tahmin, adet = 0;
     
     srand(time(NULL));
     sayi = 1 + rand () % 100;
    
     while (adet < 10) {
           
           printf ("%d. tahmininizi giriniz: ", adet+1);
           scanf ("%d", &tahmin);
           adet ++;
           
           if (tahmin > sayi) {
              printf ("DAHA DUSUK");
              printf (" - Kalan tahmin sayisi: %d\n\n", 10-adet);
           }
               
           else if (tahmin < sayi) {
              printf ("DAHA YUKSEK"); 
              printf (" - Kalan tahmin sayisi: %d\n\n", 10-adet);
           }
              
           else {
              printf ("Tebrikler, bildiniz.\n\n"); 
              break;
           }
     }
     
     if (adet >= 10 && tahmin !=sayi)
         printf ("Tahmin hakkin tukendi, kaybettin.");

     getch ();
}
