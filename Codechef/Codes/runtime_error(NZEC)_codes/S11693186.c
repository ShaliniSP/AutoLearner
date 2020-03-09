
    #include<stdio.h>
    int main()
    {
        int i,n,count=0,countt=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
            count++;
            else
            countt++;
        }
        if(count>countt)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
    }
    

