
    #include<stdio.h>
    int main(void)
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
       printf("READY FOR BATTLE");
      else
       printf("NOT READY");
      return 0;
    }

