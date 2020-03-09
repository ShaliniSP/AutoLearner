
    #include<stdio.h>
     int main(void)
    {
        int t,n,a[100],c=0,d=0,i;
        scanf("%d", &t);
        for (i=0;i<t;i++)
            scanf("%d", &a[i]);
        for (i=0;i<t;i++)
        {
     
            n=a[i]%2;
            if(n==0)
                c=c+1;
            else
                d=d+1;
        }
        if (c>d)
            printf("READY FOR BATTLE\n");
        else if (c<=d)
            printf("NOT READY\n");
            return 0;
            }

