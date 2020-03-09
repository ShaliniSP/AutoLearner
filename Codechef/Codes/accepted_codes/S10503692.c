
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
       int t,a,c1=0,c2=0  ;
      
       scanf("%d" , &t) ; 
       while ( t--)
       {
          
           
     scanf("%d" , &a) ;
     if(a%2==0)
      c1++;
    else 
      c2++;
      }
    if(c1>c2)
      printf("READY FOR BATTLE\n");
    else
      printf("NOT READY\n");
    return 0;
    } 

