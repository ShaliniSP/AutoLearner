
    #include<stdio.h>
    main()
    {
        int a[100];
        int choice ;
        int i ;
        int even=0;
        int odd=0 ;
        scanf("%d",&choice) ;
        for(i=0;i<choice;i++)
        {
            scanf("%d",&a[i]) ;
        }
        for(i=0;i<choice;i++)
        {
            if(a[i]%2==0)
                even++ ;
            else
                odd++ ;
        }
        if(even>odd)
            printf("READY FOR BATTLE\n") ;
        else
            printf("NOT READY\n") ;
    }
    

