
    #include<stdio.h>
    int main()
    {
      int i,j,count,count1,n;
        count=0;
        count1=0;
           scanf("%d",&n);
           for(j=0;j<n;j++)
           {
           scanf("%d",&i);
              if(i%2==0)
              count++;
              else
              count1++;
              }
              if(count>count1)
              printf("READY FOR BATTLE\n");
              else
              printf("NOT READY\n");
              
      }
      

