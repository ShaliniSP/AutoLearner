
    #include<stdio.h>
    int main()
    {
     int c=0,d=0;
     int i,a[100],n;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
         if(a[i]%2==0)
            c++;
        else
            d++;
     }
     if(c>d)
         printf("READY FOR BATTLE");
         else
            printf("NOT READY");
     return 0;
     }
    

