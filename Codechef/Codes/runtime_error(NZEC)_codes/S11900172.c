
    #include<stdio.h>
    main()
    {
        int t,c=0,i;
        scanf("%d", &t);
        int a[t];
        for (i=0;i<t;i++)
        {
        scanf("%d", &a[i]);
        if(a[i]%2==0 && a[i]!=0)
        c++;
        else c-- ;
        }
        if (c>0)
            printf("READY FOR BATTLE");
            else
                printf("NOT READY");
    }
    
    

