// Kullan�c�n�n girdi�i iki limit aras�nda rastgele 10 tane say� �retir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
     
     int baslangic, bitis, i;
     
     srand(time(NULL));
     
     printf ("Once baslangic sonra bitis degerini giriniz: ");
     scanf ("%d %d", &baslangic, &bitis);
     
     for (i=1; i<=10; i++)
        printf ("%d ", rand () % (bitis-baslangic+1) + baslangic);

     getch ();
}
