
    #include<stdio.h>
    int main()
    {
     int n,a,b=0;
     scanf("%d",&n);
     while(n--)
     {
      scanf("%d",&a);
      if(a%2==0)
      b++;
     }
     if(b>n-b)
     printf("READY FOR BATTLE\n");
     else
     printf("NOT READY\n");
    }

