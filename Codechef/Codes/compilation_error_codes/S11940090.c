
    #include<stdio.h>
    
    int main()
    {
    int i,N,a[],EVEN=0,ODD=0;
      printf("number of soliders(,100):-");
      scanf("%d",&N);
    for(i=0;i<N;i++);
     {
      printf("weapons holding each soliders(<100):-");
      scanf("%d",&a[i]);
       if(a[i]%2==0)
          EVEN++;
       else
          ODD+;
          }
        if(EVEN>ODD)
         printf("READY FOR BATTLE");
        else
          printf("NOT READY");
          
          return 0;
          }

