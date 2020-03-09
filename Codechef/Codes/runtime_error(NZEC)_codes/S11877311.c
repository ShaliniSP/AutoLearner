
    #include<stdio.h>
    int main()
    {
     int i,n,a,b=0;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
      scanf("%d",&a);
      if(a%2==0)
      {
       b++;
      } 
     }
     if(b>n-b)
     printf("READY FOR BATTLE");
     else
     printf("NOT READY");
    }

