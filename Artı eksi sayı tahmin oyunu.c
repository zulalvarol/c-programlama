// Artý eksi sayý tahmin oyununu oynar - Tek taraflý

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
     
    int dizi [10000] = {0};     
    int i, b1, b2, b3, b4, s1, s2, s3, s4;
    int arti, eksi, arti2, eksi2, sayi, tahmin = 1, toplam;
       
    srand((time(NULL)));
       
    for (i=1000; i<10000; i++) {
         
        b4 = (i % 10);
        b3 = (i % 100) / 10;
        b2 = (i % 1000) / 100; 
        b1 = i / 1000;
         
        if (b1 != b2 && b1 != b3 && b1 != b4) 
            if (b2 != b3 && b2 != b4 && b3 != b4)
                dizi [i] = 1; 
     }
     
     while (1) {
           
        while (1) {
                   
             sayi = rand () % 10000; 
                   
             if (dizi[sayi] == 1)
                 break;
        }
           
        printf ("%d. tahmin = %d : ", tahmin, sayi);
        scanf ("%d %d", &arti, &eksi);
        tahmin ++; 
     
        if (arti == 4 && eksi == 0) {      
            printf ("\nSayini %d tahminde buldum :)", tahmin-1);
            break;
        } 
               
        s4 = (sayi % 10);
        s3 = (sayi % 100) / 10;
        s2 = (sayi % 1000) / 100; 
        s1 = sayi / 1000;    
            
        for (i=1000; i<10000; i++) {
                
            arti2 = 0;
            eksi2 = 0;
                
            b4 = (i % 10);
            b3 = (i % 100) / 10;
            b2 = (i % 1000) / 100; 
            b1 = i / 1000;    
                       
            if (b1 == s1)
                arti2 ++; 
                   
            if (b2 == s2)
                arti2 ++;  
                   
            if (b3 == s3)
                arti2 ++;  
                   
            if (b4 == s4)
                arti2 ++;     
                                 
            if (b1 == s2 || b1 == s3 || b1 == s4)
                eksi2 ++;
         
            if (b2 == s1 || b2 == s3 || b2 == s4)
                eksi2 ++;
                   
            if (b3 == s1 || b3 == s2 || b3 == s4)
                eksi2 ++;
                   
            if (b4 == s1 || b4 == s2 || b4 == s3)
                eksi2 ++;       
                     
            if (arti != arti2 || eksi != eksi2)
                dizi [i] = 0;
            
        }
                         
        toplam = 0;
                
        for (i=0; i<10000; i++)
            toplam = toplam + dizi[i];
        
        printf ("Havuzumda kalan sayi adedi = %d\n\n", toplam);
                
        if (toplam == 0) {
            printf ("\nBana dogru cevaplar vermedin :(");
            break;
        }   
    }
     
    getch ();
}
