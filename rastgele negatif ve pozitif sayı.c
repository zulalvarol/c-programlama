// Program rastgele 10 tane tam say� (pozitif veya negatif) �retir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
     
     int sayi, isaret, i;
     srand(time(NULL));
     
     for (i=1; i<=10; i++) {
         sayi = rand ();
         isaret = rand ();
         
         if (isaret % 2 == 0)
            sayi = sayi * (-1);
            
         printf ("%d ", sayi);
     }
     
     getch ();
}
