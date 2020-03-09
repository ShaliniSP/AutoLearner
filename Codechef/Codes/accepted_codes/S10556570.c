
    #include<stdio.h>
    int main()
    {
        int i,n,a[105],count=0,r=0;
        scanf("%d",&n);
        for(i=0;i<=n-1;i++)
            scanf("%d",&a[i]);
        for(i=0;i<=n-1;i++)
        {
            if(a[i]%2==0)
                count++;
            else
                r++;
        }
        if(count>r)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
        return 0;
    }
    

