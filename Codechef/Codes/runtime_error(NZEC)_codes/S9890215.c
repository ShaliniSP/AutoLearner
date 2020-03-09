
    #include<stdio.h>
    #include<stdlib.h>
    void main(void)
    {
      int N,i,counte =0,counto=0;
      scanf("%d",&N);
      int arr[N];
      for(i=0;i<N;i++)
      {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
          counte++;
        else
          counto++;
      }
      if(counte > counto)
       printf("READY FOR BATTLE\n");
      else
       printf("NOT READY\n");
    }

