
    #include<stdio.h>
    int main()
    {
        int n;
        scanf("%d",&n);
        int no,a[n],i,eve = 0,odd = 0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&no);
            if(no%2==0)
                eve += 1;
            else
                odd += 1;
        }
        if(eve>odd)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
        return 0;
    }
    

