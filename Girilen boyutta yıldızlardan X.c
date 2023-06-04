#include <stdio.h>

main () {
     
     int kenar, i, j;

     printf ("Lutfen bir koldaki karakter sayisini giriniz: ");
     scanf ("%d", &kenar);
     printf ("\n");
     
     for (i=1; i<=kenar; i++) {
                     
        for (j=0; j<i-1; j++)
           printf (" ");
           
        printf ("*");
                   
        for (j=1; j<=(2*kenar-1)-2*(i-1); j++)
           printf (" ");    
           
        printf ("*\n"); 
        
     }  
     
     for (i=1; i<=kenar; i++)
        printf (" ");
       
     printf ("*\n");     
     
     for (i=1; i<=kenar; i++) {
                     
        for (j=0; j<kenar-i; j++)
           printf (" ");
           
        printf ("*");
                   
        for (j=1; j<=2*i-1; j++)
           printf (" ");    
           
        printf ("*\n");  
        
     }  
        
     getch ();
                     
}
