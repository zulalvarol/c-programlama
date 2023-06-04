// 10 x 10 boyutlarýnda labirent çözer

#include <stdio.h>
#define SATIR 15  // Çözülecek labirentin satýr sayýsý ifade eder
#define SUTUN 45  // Çözülecek labirentin sütun sayýsý ifade eder

/*

10 x 10'luk Ornek Girdi

0 0 0 0 0 0 0 1 0 0
0 0 0 1	0 0 0 1 0 0
0 1 1 1	1 1 0 1 0 0
0 1 0 0	0 1 1 1 1 0
0 1 0 0	0 0 0 1 0 0
0 1 1 1	1 0 1 1 0 0
0 0 1 0	1 0 0 1 1 0
0 0 1 0	1 0 0 0 1 0
0 1 1 0	1 0 1 1 1 0
0 0 0 0	1 0 0 0 0 0

*/

main () {
     
     int dizi[SATIR][SUTUN], i, j, a, komsu, toplam=0;
        
     for (i=0; i<SATIR; i++)       
         for (j=0; j<SUTUN; j++)
             scanf ("%d", &dizi[i][j]);
   
     printf ("\n\n");  
     
     for (a=0; a<SATIR*SUTUN; a++) {          

         for (i=1; i<SATIR-1; i++) {         
            
            for (j=1; j<SUTUN-1; j++) {
   
             komsu = dizi[i][j-1] + dizi[i][j+1] + dizi[i+1][j] + dizi[i-1][j];
  
               if (komsu == 1)
                   dizi[i][j] = 0;                      
             }
         }
     }
     
     for (i=0; i<SATIR; i++) {         
         for (j=0; j<SUTUN; j++) {
             
             if (dizi[i][j] == 1)
                printf ("%c ", 254);
             else
                printf ("0 "); 
                
             toplam = toplam + dizi[i][j];
         }
         printf ("\n");
     }                 

     printf ("\n\nCikisa ulasmak icin gereken adim sayisi = %d", toplam);
     getch ();
}
