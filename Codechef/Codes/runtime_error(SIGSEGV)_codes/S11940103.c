
    #include<stdio.h>
     
    int main()
    {
    int i,N,a[100],EVEN=0,ODD=0;
      
      scanf("%d",&N);
    for(i=0;i<N;i++);
     {
     
      scanf("%d",&a[i]);
       if(a[i]%2==0)
          EVEN++;
       else
          ODD++;
          }
        if(EVEN>ODD)
         printf("READY FOR BATTLE\n");
        else
          printf("NOT READY\n");
          
          return 0;
          
          } 

