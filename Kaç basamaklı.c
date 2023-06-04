#include <stdio.h>

main () {
     
     long long int sayi;
     int sayac;
     
     sayac = 0;
          
     printf ("Lutfen bir sayi giriniz: ");
     scanf ("%lld", &sayi);
     
     while (sayi > 0) {
        sayi = sayi / 10;
        sayac ++;
     }
     
     printf ("Sayiniz %d basamaklidir", sayac);
             
     getch ();
     
}
