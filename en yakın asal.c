// Girilen bir sayıya (bu sayı hariç) en yakın olan asal sayıyı ekranda gösterir.

#include <stdio.h>


main () { 
     
     int sayi, alt, ust, i, en_yakin, asal, bolen;
     
     printf ("Sayinizi giriniz: ");
     scanf ("%d", &sayi);
     
     for (i=sayi-1; i>=2; i--) {
         
         asal = 1;
         
         for (bolen = 2; bolen < i; bolen ++)
             if (i % bolen == 0)
                asal = 0;
         
         if (asal == 1) {
            alt = i;
            break;
         }    
     }
     
     for (i=sayi+1; i<=sayi*sayi; i++) {
         
         asal = 1;
         
         for (bolen = 2; bolen < i; bolen ++)
             if (i % bolen == 0)
                asal = 0;
         
         if (asal == 1) {
            ust = i;
            break;
         }  
     }
     
     if (sayi < 2)
        en_yakin = ust;
        
     else if (sayi - alt <= ust - sayi)
        en_yakin = alt;
        
     else
        en_yakin = ust;
        
     printf ("%d sayisina en yakin asal sayi = %d", sayi, en_yakin);

     getch ();
        
}
