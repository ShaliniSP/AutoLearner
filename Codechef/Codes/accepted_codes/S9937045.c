
    #include<stdio.h>
    int main()
    {
        int n,a[100],l=0,ul=0,c;
        int i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            c=a[i]%2;
            if(c==0)
            l++;
            else
            ul++;
        }
        if(l>ul)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
        return 0;
    }

