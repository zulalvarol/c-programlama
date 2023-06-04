// Girilen 7 tam sayý arasýnýn ortancasýný bulur.

#include <stdio.h>

main () { 

     int dizi [7], i, j, depo;
     
     printf ("7 tane sayi giriniz: ");
     
     for (i=0; i<7; i++)
         scanf ("%d", &dizi[i]);
     
     
     for (i=0; i<7; i++) {
         for (j=0; j<6; j++) {
             
             if (dizi[j] > dizi [j+1]) {
                         
                 depo = dizi[j];
                 dizi[j] = dizi[j+1];
                 dizi[j+1] = depo;
   
             }
         }
     }
      
     printf ("Ortanca = %d", dizi[3]);
     getch ();
}
