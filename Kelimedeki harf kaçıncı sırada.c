// Girilen bir kelimede geçen yine girilen harfin (küçük ya da büyük) en son kaçýncý
// sýrada harf olduðunu bulur

#include <stdio.h>

main () { 

     char kelime[100], harf;
     int i, sira = 0, sabit;
     
     printf ("Kelimenizi ve harfinizi giriniz: ");
     scanf ("%s %c", kelime, &harf);
     
     if (harf >= 65 && harf <= 90)
        sabit = 32;
     else
        sabit = -32;
     
     for (i=0; kelime[i] != '\0'; i++)
         if (kelime[i] == harf || kelime[i] == harf+sabit)
            sira = i+1;
            
     if (sira == 0)
        printf ("%c harfi yok", harf);
        
     else
        printf ("En son %c harfi %d. siradadir.", harf, sira);
              
     getch ();
}
