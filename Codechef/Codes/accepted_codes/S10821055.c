
    #include<stdio.h>
    int main()
    {
     int n,e=0,o=0,i;
     scanf("%d",&n);
     int N[n];
     for(i=0;i<n;i++)
     {
     scanf("%d",&N[i]);
     if(N[i]%2==0)
     e++;
     else
     o++;
     }
     if(e>o)
     printf("READY FOR BATTLE");
     else
     printf("NOT READY");
     return 0;
     }

