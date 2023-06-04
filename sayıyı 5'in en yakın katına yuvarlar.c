// Kullanýcýnýn girdiði bir tam sayýyý 5'in en yakýn katýna yuvarlar.

#include <stdio.h>

main () {
     
     int sayi;
     
     printf ("Sayi giriniz: ");
     scanf ("%d", &sayi);
     
     if (sayi % 5 == 1)
        sayi = sayi - 1;
        
     else if (sayi % 5 == 2)
        sayi = sayi - 2;
        
     else if (sayi % 5 == 3)
        sayi = sayi + 2;
        
     else if (sayi % 5 == 4)
        sayi = sayi + 1;

     printf ("Sonuc = %d", sayi); 
     getch ();
}
