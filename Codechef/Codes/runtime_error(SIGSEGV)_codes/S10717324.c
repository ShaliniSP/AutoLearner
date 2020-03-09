
    #include<stdio.h>
    int main()
    {
     int n,a[10],i=0,j=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
      if(a[i]%2==0)
      {
       j=j+1;
       }
       else
      k=k+1;
      }
      if(j>k)
      {
      printf("READY FOR BATTLE");
      }
      else
      printf("NOT  READY");
      return 0;
      }
      

