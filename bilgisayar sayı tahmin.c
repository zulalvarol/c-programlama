// Kullanıcının 1-100 arasında tuttuğu bir sayıyı bulur

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
     
     int alt_limit = 1, ust_limit = 100, tahmin, yanit;
     
     srand(time(NULL));
     
     while (1) {
           
          tahmin = alt_limit + rand() % (ust_limit - alt_limit + 1); 
          
          // tahmin = (ust_limit + alt_limit) / 2;
           
          printf ("Tahminim: %d\n", tahmin);
          printf ("Yanitiniz: ");
          scanf ("%d", &yanit);
          printf ("\n");
          
          if (yanit == 1)
              alt_limit = tahmin + 1;
          else if (yanit == 2)
              ust_limit = tahmin - 1;
          else {
              printf ("Aferin bana, buldum.");
              break;
          }
     }

     getch ();
}
