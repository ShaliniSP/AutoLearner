
    #include<stdio.h>
    int main()
    {
        int ar[100],n,i,j,k,e,o,r;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d",&ar[i]);
        for(j=1;j<=n;j++)
        {
            r=ar[j]%2;
            if(r==0)
                e+=1;
            else
                o+=1;
        }
        if(e>o)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        return 0;
    }
    

