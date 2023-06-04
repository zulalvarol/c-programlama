// Girilen bir kelimedeki küçük harfleri büyük, büyük harfleri
// küçük harf yazar

#include <stdio.h>

main () { 
     
     char ayse[100];
     int i = 0;
     
     printf ("Kelime giriniz: ");
     scanf ("%s", ayse);
     
     while (ayse[i] != '\0') {
           
           if (ayse[i] >= 65 && ayse[i] <= 90)
              printf ("%c", ayse[i]+32);
           else
              printf ("%c", ayse[i]-32);
           
           i ++;
     }
     
     getch ();
}
