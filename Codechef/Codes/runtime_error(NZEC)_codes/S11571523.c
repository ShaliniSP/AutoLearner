
    #include<stdio.h>
    void main()
    {
     int n,a[1000],i,c=0,d=0;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
      scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
      if(a[i]%2==0)
      {
       c++;
      }
      else
      {
       d++;
      }
     }
     if(c>d)
     {
      printf("\nREADY FOR BATTLE");
     }
     else
     {
      printf("\nNOT READY");
     }
    }
      
     

