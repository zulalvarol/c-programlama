#include <stdio.h> 
main(){
    int satir,i,ps,j,k;
    printf("Pascal ucgeni Kac satir olsun:  ");
    scanf("%d",&satir); 
    
    for ( i = 0; i < satir; i++){
        ps=1;
        for (j = 0; j < satir - i; j++){
        printf(" "); 
        }
    
    for (k = 0; k <= i; k++){
        printf("%d ", ps);
        ps = ps * (i - k) / (k + 1);
    }
    printf("\n");
    }
getch();
}
