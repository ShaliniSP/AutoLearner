
    #include<stdio.h>
    #include<string.h>
    int main()
    {
        int n,i,a[100],e=0,o=0;
        scanf("%d",&n);
        for(i=0;i<n;++i)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
                ++e;
            else
                ++o;
        }
        if(e>o)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        return 0;
    }
    

