// Pe�pe�e ayn� say� yaz�lana kadar ka� tane say� girildi�ini bulur.

#include <stdio.h>

main () {
     
     int ilk, son, sayac = 2;
     
     printf ("Sayi giriniz: ");
     scanf ("%d", &ilk);
     
     printf ("Sayi giriniz: ");
     scanf ("%d", &son);
     
     while (ilk != son) {
           
           ilk = son;
           
           printf ("Sayi giriniz: ");
           scanf ("%d", &son);
           
           sayac ++;
              
     }
     
     printf ("\n%d adet girilmistir", sayac);

     getch ();
}
