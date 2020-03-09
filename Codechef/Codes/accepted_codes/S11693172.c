
    #include<stdio.h>
    int main()
    {
        int i,n,count=0,countt=0,x;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x%2==0)
            count++;
            else
            countt++;
        }
        if(count>countt)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
        return 0;
    }
    

