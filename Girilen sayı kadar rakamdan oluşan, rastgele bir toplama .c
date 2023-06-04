// Girilen sayý kadar rakamdan oluþan, rastgele bir toplama / çýkarma eþitliði üreten program.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () { 
     
     int adet, i, sayi, islem, sonuc = 0;
     
     srand(time(NULL));
     
     printf ("Esitligin solundaki rakam sayisini giriniz: ");
     scanf ("%d", &adet);
     
     for (i=1; i<=adet; i++) {
         
        sayi = rand () % 10;
        islem = rand () % 2;
        
        if (i==1) {
           printf ("%d ", sayi);
           sonuc = sonuc + sayi;
        }
           
        else if (islem == 0) {
           printf ("+ %d ", sayi);
           sonuc = sonuc + sayi; 
        }
           
        else {
           printf ("- %d ", sayi); 
           sonuc = sonuc - sayi;
        }
     }
               
     if (adet > 0)
        printf ("= %d", sonuc);
        
     getch ();
}
