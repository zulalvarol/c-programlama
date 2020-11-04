// Girilen iki sayý arasýnda beþ iþlem yapar

#include <stdio.h>

main () {
     
     int sayi1, sayi2;
     
     printf ("Lutfen iki sayi giriniz: ");
     scanf ("%d %d", &sayi1, &sayi2);
     
     printf ("\n%d + %d = %d\n", sayi1, sayi2, sayi1+sayi2);
     printf ("%d - %d = %d\n", sayi1, sayi2, sayi1-sayi2);
     printf ("%d x %d = %d\n", sayi1, sayi2, sayi1*sayi2);
     printf ("%d : %d = %d\n", sayi1, sayi2, sayi1/sayi2);
     printf ("%d mod %d = %d\n", sayi1, sayi2, sayi1%sayi2);
     
     getch ();
}
