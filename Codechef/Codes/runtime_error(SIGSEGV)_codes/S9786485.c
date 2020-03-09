
    #include<stdio.h>
    int main()
    {
     int n,i,c1,c2;
     scanf("%d",&n);
     int a[n]; 
     for(i=0;i<n;i++)
     {
      scanf("%d",a[i]);
     }
     for(i=0;i<n;i++)
     {
      if(a[i]%2==0)
      {
        c1++;
      }else
      c2++;
      }
      if(c1<c2||c1==c2)
       printf("NOT READY");
      else
      printf("READY FOR BATTLE");
     return 0;
    }

