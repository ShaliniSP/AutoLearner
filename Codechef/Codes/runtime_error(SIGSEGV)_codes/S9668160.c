
    #include<stdio.h>
    void main()
    {
    	int i,n,a[n],co=0,ce=0;
    	scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        if(n==1)
        {
            if(a[0]%2==1)
                printf("NOT READY");
            else
                printf("READY FOR BATTLE");
        }
        else{
        for(i=0;i<n;i++)
        {
            if(a[i]%2==1)
                co++;
            else
                ce++;
        }
        if(co>=ce)
        {
            printf("NOT READY");
        }
        else
        {
            printf("READY FOR BATTLE");
        }
        }
    
    }
    

