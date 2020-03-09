
    #include<stdio.h>
    int main()
    {
     int n,a,e=0,o=0;
     scanf("%d",&n);
     while(n--)
     {
      scanf("%d",&a);
      if(a%2==0)
       e++;
      else
       o++;
     }
     if(e>o)
     {
      printf("READY FOR BATTLE");
     }
     else
     {
      printf("NOT READY");
     }
     return 0;
    }

