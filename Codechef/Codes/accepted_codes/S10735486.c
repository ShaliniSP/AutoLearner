
    #include<stdio.h>
    int main()
    {
     int a[100],i,n,count=0,flag=0,m;
    // printf("soldiers\n");
     scanf("%d",&n);
     //printf("enter elements of array\n");
     for(i=0;i<n;i++)
     {
      scanf("%d",&a[i]);
     }
    /* for(i=0;i<n;i++)
     {
      printf("%d\n",a[i]);
     }*/
     for(i=0;i<n;i++)
     { {
      m=a[i]%2;
      }
      if(m==0)
      {
       count++;
      }
      else
      {
       flag++;
      }
     }
     if(count>flag)
     {
      printf("READY FOR BATTLE\n");
     }
     else
     {
      printf("NOT READY\n");
     }
     count=0;
     flag=0;
     return 0;
    }
    

