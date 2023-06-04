#include<stdio.h>
#include<conio.h>
main()
{ int satir,sutun,n, depo=1;
printf("Kac satir yildiz olsun :");
scanf("%d",&n);
  for(satir=0; satir<n; satir++)
    {  for(sutun=0; sutun<n-satir; sutun++)
      printf("*");  
            
      for(sutun=0; sutun<satir*2; sutun++)
      printf(" ");  
      
      for(sutun=0; sutun<n-satir; sutun++)
      printf("*");
        
      printf("\n");
    }
    
    for(satir=1; satir<n; satir++)
    {  for(sutun=0; sutun<satir+1; sutun++)
      printf("*");  
            
      for(sutun=0; sutun<(n-satir-1)*2; sutun++)
      printf(" ");  
      
      for(sutun=0; sutun<satir+1; sutun++)
      printf("*");
        
      printf("\n");
    }
  getch();  
return;
}
