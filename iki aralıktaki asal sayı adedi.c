// Girilen üç basamaklı iki sayı arasında (bu sayılar dahil); içinde 7 rakamı bulunmayan kaç tane
// asal sayı olduğunu bulur. (İlk sayının ikinci sayıdan daha küçük girildiği varsayılır)

#include <stdio.h>

main () {
  
     int sayi1, sayi2, asal, i, j, b1, b2, b3, adet = 0;
     
     printf ("Iki sayi giriniz: ");
     scanf ("%d %d", &sayi1, &sayi2);

     for (j=sayi1; j<=sayi2; j++) {
     
         asal = 1;
         
         for (i=2; i<j; i++)
             if (j % i == 0)
                asal = 0;
         
         b1 = j / 100;
         b2 = (j / 10) % 10;
         b3 = j % 10;
         
         if (asal == 1 && b1 != 7 && b2 != 7 && b3 != 7)
            adet ++;
        
     }
     
     printf ("Kritere uygun sayi adedi = %d", adet);
 
     getch ();
}
