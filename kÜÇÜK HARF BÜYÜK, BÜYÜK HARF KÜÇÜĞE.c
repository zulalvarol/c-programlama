// Girilen bir kelimedeki k���k harfleri b�y�k, b�y�k harfleri
// k���k harf yazar

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
