
    #include<stdio.h>
    main()
    {
        int n,i,ctr=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        if(a[i]%2==0)
            ctr++;
        else ctr--;
    
        if(ctr>0)
            printf("READY FOR BATTLE");
        else printf("NOT READY");
    }
    

