// Girilen bir kelimede ge�en yine girilen harfin (k���k ya da b�y�k) en son ka��nc�
// s�rada harf oldu�unu bulur

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
