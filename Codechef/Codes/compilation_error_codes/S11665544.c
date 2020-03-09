
    #include<stdio.h>
    int main()
    {
      int n,a[100],count=0,count1=0;
      scanf("%d",&n);
      for(int i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
        
        if(a[i]%2==0)
          count+=1;
        else 
          count1++;
      }
    if(count>count1)
     printf("READY FOR BATTLE\n");
    else
     printf("NOT READY\n");
    return 0;
    }
      

