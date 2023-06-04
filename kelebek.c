// Girilen kenar uzunluðuna sahip aþaðýdaki deseni oluþturan program yazýnýz.
/*

Kenar uzunluðunu giriniz: 9

x               x
. x           x .
. . x       x . .
. . . x   x . . .
. . . . x . . . .
. . . x   x . . .
. . x       x . .
. x           x .
x               x

*/


#include <stdio.h>

main () { 
     
     int kenar, i, j;
     
     printf ("Kenar uzunlugunu giriniz: ");
     scanf ("%d", &kenar);
     printf ("\n");
     
     for (i=1; i<=kenar; i++) {
         
         for (j=1; j<=kenar; j++) {
          
             if (i == j || i == kenar-j+1)
                printf ("X ");
                
             else if ((i>j && j<kenar-i+1) || (i<j && j>kenar-i+1))
                printf (". ");
                
             else
                printf ("  "); 
         }   
         
         printf ("\n");    
     }
     
     getch ();
}
