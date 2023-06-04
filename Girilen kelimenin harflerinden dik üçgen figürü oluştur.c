// Girilen kelimenin harflerinden dik üçgen figürü oluþtur.

/*

z
ü ü 
l l l 
a a a a
l l l l l

*/

#include <stdio.h>

main () { 
     
     int i, j, uzunluk;
     char kelime[100];
     
     printf ("Kelimenizi giriniz: ");
     scanf ("%s", kelime);
     printf ("\n");
     
     for (uzunluk=0; kelime[uzunluk] != '\0'; uzunluk++);
     
     for (i=0; i<uzunluk; i++) {
         for (j=0; j<=i; j++)
             printf ("%c ", kelime[i]);
             
         printf ("\n");
     }
     
     getch ();
}
