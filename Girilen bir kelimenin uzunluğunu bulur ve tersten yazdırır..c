// Girilen bir kelimenin uzunlu�unu bulur ve tersten yazd�r�r.

#include <stdio.h>

main () { 
     
     char ayse[100];
     int uzunluk = 0, i;
     
     printf ("Kelime giriniz: ");
     scanf ("%s", ayse);
     
     for (uzunluk = 0; ayse[uzunluk] != '\0'; uzunluk ++);   
     
     for (i=uzunluk-1; i>=0; i--)
         printf ("%c", ayse[i]);
     

     getch ();
}
