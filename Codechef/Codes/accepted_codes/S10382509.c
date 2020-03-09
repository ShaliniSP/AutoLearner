
    #include<stdio.h>
    int main()
    {
      int N,A[101],i,c=0;
      scanf("%d",&N);
      for(i=0;i<N;i++)
          scanf("%d",&A[i]);
      for(i=0;i<N;i++)
      {
         if(!(A[i]&1))
             c++;
       }
       if(c>N-c)
         printf("READY FOR BATTLE\n");
       else
         printf("NOT READY\n");
       return 0;
    }

