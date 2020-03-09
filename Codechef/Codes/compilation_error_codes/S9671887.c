
    #include<stdio.h>
    int main()
    {
     int n;
     int a[100];
     scanf("%d",&n);
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     for(j=0;j<n;j++)
     {
      if(a[j]%2==0)
      l++;
      else
      m++;
     }
     if(l>m)
     printf("READY FOR BATTLE");
     else
     printf("NOT READY");
     return 0;
     }

