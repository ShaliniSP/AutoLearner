
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
      int a[1000],i,j,count,count1,n;
        count=0;
        count1=0;
           scanf("%d",&n);
           for(j=0;j<n;j++)
           scanf("%d",&a[j]);
           for(j=0;j<n;j++)
           {
              if((a[j]%2==0))
              count++;
              else
              count1++;
              }
              if(count>count1)
              printf("READY FOR BATTLE\n");
              else
              printf("NOT READY\n");
              
      }
      

