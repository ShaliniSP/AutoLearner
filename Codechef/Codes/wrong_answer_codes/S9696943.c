
    #include<stdio.h>
    int main()
    {
     int soldier[100],i,n,lucky,unlucky;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
      scanf("%d",&soldier[i]);
      if(soldier[i]%2==0)
      lucky++;
      else
      unlucky++;
     }
     if(lucky>unlucky)
     printf("READY FOR BATTLE");
     else
     printf("NOT READY");
     return 0;
    }

