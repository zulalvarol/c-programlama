#include <stdio.h>

main () {
       
    char harf, eski, yeni, yepyeni;
    int adet = 3;
    
    eski = getch ();
    printf ("%c ", eski);
    
    yeni = getch ();
    printf ("%c ", yeni);
    
    yepyeni = getch ();
    printf ("%c ", yepyeni);
    
    while (1) {
          
          if (yepyeni == yeni+1 && yeni == eski+1) 
          break;
          
          eski = yeni;
          yeni = yepyeni;
          yepyeni = getch ();
          printf ("%c ", yepyeni);
          adet ++;
    }
    
    printf ("\n%d adet harf girildi.", adet);
    getch ();
}
