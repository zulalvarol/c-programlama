// Girilen kelimedeki b�y�k k���k harf say�lar�n� bulur

#include <stdio.h>

main () { 

     char kelime[100];
     int i = 0, kh = 0, bh = 0;
     
     printf ("Kelimenizi giriniz: ");
     scanf ("%s", kelime);
     
     while (kelime[i] != '\0') {
           
           if (kelime[i] >= 65 && kelime[i] <= 90)
              bh ++;
           
           if (kelime[i] >= 97 && kelime[i] <= 122)
              kh ++;
           
           i++;
     }
     
     printf ("%d kucuk tane ve %d tane buyuk harf vardir", kh, bh);
              
     getch ();
}
