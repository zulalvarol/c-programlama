// -1 girilene kadar kullan�c�n�n girdi�i say�lar� al�r, ard�ndan bu
// say�lar aras�na >, < ve = i�aretleri koyarak ekrana yazd�r�r

/*

5 8 9 9 7 6 7 -1 --> 5 < 8 < 9 = 9 > 7 > 6 < 7

*/

#include <stdio.h>

main () { 
     
     int dizi[100], i = 0, sayi = 0;
     
     printf ("Sayilarinizi giriniz: ");
     
     while (sayi != -1) {
           
           scanf ("%d", &sayi);
           dizi[i] = sayi;
           i ++;      
     }
     
     for (i=0; dizi[i] != -1; i++) {
         
               printf ("%d", dizi[i]);
               
               if (dizi[i+1] != -1) {
               
                   if (dizi[i] > dizi[i+1])
                      printf (" > ");
                      
                   else if (dizi[i] < dizi[i+1])
                      printf (" < ");
                      
                   else
                      printf (" = ");         
               }
     }
     
     getch ();
}
