
    #include<stdio.h>
    int main()
    {
       int s,W[100],w,count_even=0,count_odd=0,i=0;
       scanf("%d",&s);
       for(i=0;i<s;i++)
       {
          scanf("%d",&w);
          W[i]=w;
       }
       for(i=0;i<s;i++)
       {
          if(W[i]%2==0)
          {
             count_even++;
          }
          else
          {
             count_odd++;
          }
       }
       if(count_even>count_odd)
       {
          printf("READY FOR BATTLE\n");
       }
       else
       {
          printf("NOT READY\n");
       }
    }

