// Seçilen þeklin girilen uzunluklarýna göre çevresini ve alanýný hesaplar

#include <stdio.h>

main () {
  
     int sekil, kenar1, kenar2;
     
     printf ("Kare = 1, Dikdortgen = 2, Eskenar Ucgen = 3\n");
     printf ("Sekil seciniz: ");
     scanf ("%d", &sekil);
     
     switch (sekil) {
            
            case 1:
                 printf ("\nKarenin kenar uzunlugunu giriniz: ");
                 scanf ("%d", &kenar1);
                 printf ("\nKarenin cevresi = %d\n", kenar1 * 4);
                 printf ("Karenin alani = %d\n", kenar1 * kenar1);
            break;  
            
            case 2:
                 printf ("\nDikdortgenin kenar uzunluklari giriniz: ");
                 scanf ("%d %d", &kenar1, &kenar2);
                 printf ("\nDikdortgenin cevresi = %d\n", (kenar1 + kenar2)*2);
                 printf ("Dikdortgenin alani = %d\n", kenar1 * kenar2);
            break;    
            
            case 3:
                 printf ("\nEskenar ucgenin once taban sonra yuksekligini giriniz: ");
                 scanf ("%d %d", &kenar1, &kenar2);
                 printf ("\nEskenar ucgenin cevresi = %d\n", kenar1 * 3);
                 printf ("Eskenar ucgenin alani = %d\n", (kenar1 * kenar2)/2);
            break;           
            
            default:
                 printf ("\nYanlis tusa bastiniz..");         
            break;

     }
 
     getch ();
}
