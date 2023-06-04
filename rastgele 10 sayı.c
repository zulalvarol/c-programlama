// Program rastgele 10 tane tam sayý üretir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
     
     int sayi, i;
     srand(time(NULL));
     
     for (i=1; i<=10; i++) {
         sayi = rand ();
         printf ("%d ", sayi);
     }
     
     getch ();
}
