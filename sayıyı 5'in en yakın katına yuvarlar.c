// Kullan�c�n�n girdi�i bir tam say�y� 5'in en yak�n kat�na yuvarlar.

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
