#include <stdio.h>

main () {
     
     int sayi;
     float i=0;
          
     printf ("Lutfen bir sayi giriniz: ");
     scanf ("%d", &sayi);
     
     while (i*i < sayi) {
        i = i + 0.000001;
     }
     
     printf ("%d sayisinin yaklasik karekoku = %f", sayi, i);
             
     getch ();
     
}
