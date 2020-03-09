
    int main()
    {
        int n,a[100],countr=0,countn=0,i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                countr++;
            else
                countn++;
        }
        if(countr>countn)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        return 0;
    }
    

