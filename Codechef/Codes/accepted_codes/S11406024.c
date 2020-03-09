
    #include <stdio.h>
     
    int main()
    {
      int ar[100],N,i,n,eve=0,odd=0;
      scanf("%d",&N);
      for(i=0;i<N;i++)
      {
          scanf("%d",&ar[i]);
          if(ar[i]%2==0)
          eve=eve+1;
          else
          odd=odd+1;
      }
      if(eve>odd)
      printf("READY FOR BATTLE\n");
      else
      printf("NOT READY\n");
      
       return 0; 
        
    }

