// Kulanýcýnýn girdiði üç sayýnýn EBOB'unu hesaplar. 

#include <stdio.h>

main () {
     
     int sayi1, sayi2, sayi3, i, ebob;
     
     printf ("Uc sayi giriniz: ");
     scanf ("%d %d %d", &sayi1, &sayi2, &sayi3);
          
     for (i=1; i<=sayi1; i++)     
           if (sayi1%i == 0 && sayi2%i == 0 && sayi3%i == 0)
              ebob = i;           

     printf ("EBOB(%d,%d,%d) = %d", sayi1, sayi2, sayi3, ebob);  
     getch ();
}
