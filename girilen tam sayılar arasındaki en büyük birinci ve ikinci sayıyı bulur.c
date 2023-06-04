// 0 girilen kadar girilen tam sayýlar arasýndaki en büyük birinci 
// ve ikinci deðeri bulur

#include <stdio.h>

main () {
     
     int sayi, birinci, ikinci, adet = 0;
     
     
     while (1) {
           
          scanf ("%d", &sayi); 
          adet ++;
          
          if (sayi == 0)
             break;
             
          if (sayi > birinci || adet == 1) {
               ikinci = birinci;
               birinci = sayi;     
          } 
          
          else if (sayi > ikinci || adet == 1) {
               ikinci = sayi;
          }
          
     }
     
     if (adet > 2)
        printf ("Birinci = %d, Ikinci = %d", birinci, ikinci);
     
     getch ();
}
