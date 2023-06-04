// -1 girilene kadar kullanýcýnýn girdiði sayýlarý alýr, ardýndan bu
// sayýlar arasýna >, < ve = iþaretleri koyarak ekrana yazdýrýr

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
