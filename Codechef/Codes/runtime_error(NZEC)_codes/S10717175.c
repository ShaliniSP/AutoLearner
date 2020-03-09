
    #include<stdio.h>
    int main()
    {
     int n,a[10],i=0,j=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",a[i]);
     }
     for(i=0;i<n;i++)
     {
      if(a[i]%2 == 0)
       j++;
       else
       k++;
      }
      if(j>k)
      printf("READY FOR BATTLE");
      else
      printf("NOT  READY");
      }

