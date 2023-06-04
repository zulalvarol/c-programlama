#include <stdio.h>

main () {
     
     int sayi, onceki, sonraki, fark, bolen, i, j;
     
     printf ("Sayi giriniz: ");
     scanf ("%d", &sayi);
     
     for (i=sayi-1; i>=2; i--) {
         
         bolen = 0;
         
         for (j=2; j<i; j++) {  
             if (i%j == 0)
                bolen ++;
         }
         
         if (bolen == 0) {
            onceki = i;
            break;
         } 
     }
     
     for (i=sayi+1; i<=sayi*2; i++) {
         
         bolen = 0;
         
         for (j=2; j<i; j++) {  
             if (i%j == 0)
                bolen ++;
         }
         
         if (bolen == 0) {
            sonraki = i;
            break;
         } 
     }
     
     fark = sonraki - onceki;
     printf ("%d - %d = %d", sonraki, onceki, fark);
        
     getch ();    
}
