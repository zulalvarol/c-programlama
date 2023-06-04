// 0 girilen kadar girilen tam sayýlar arasýndaki en büyük ve en küçük deðeri bulur

#include <stdio.h>

main () {
     
     int sayi, mak, min, adet = 0;
     
     
     while (1) {
           
          scanf ("%d", &sayi); 
          adet ++;
          
          if (sayi == 0)
             break;
             
          if (sayi > mak || adet == 1)
              mak = sayi;
              
          if (sayi < min || adet == 1)
              min = sayi;
     
     }
     
     if (adet > 1)
        printf ("Maksimum = %d, Minimum = %d", mak, min);
     
     getch ();
}
