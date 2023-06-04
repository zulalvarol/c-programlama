// 6461316481561515151576572755151515 --> 6.461.316.481.561.515.151.576.572.755.151.515

#include <stdio.h>

main () { 

     char dizi[41];
     int i, adet;
     
     printf ("Sayi giriniz: ");
     scanf ("%s", dizi);
     
     for (adet=0; dizi[adet] != '\0'; adet++);
     
     printf ("Ayiracli versiyon: ");
     
     for (i=0; i<adet; i++) {
         printf ("%c", dizi[i]);
         
         if ((adet-1-i) % 3 == 0 && i != adet-1)
            printf (".");
     }
     
     getch ();
}
