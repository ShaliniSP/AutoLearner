
    #include<stdio.h>
    int main()
    {
     int n,c,d1=0,d2=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
      scanf("%d",&c);
      if(c%2==0)
       d1++;
      else
       d2++;
      }
      if(d1>d2)
      printf("READY FOR BATTLE\n");
      else
      printf("NOT READY\n");
       return 0;
       }
      

