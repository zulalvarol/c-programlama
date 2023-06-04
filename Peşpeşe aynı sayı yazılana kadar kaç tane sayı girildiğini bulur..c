// Peþpeþe ayný sayý yazýlana kadar kaç tane sayý girildiðini bulur.

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
