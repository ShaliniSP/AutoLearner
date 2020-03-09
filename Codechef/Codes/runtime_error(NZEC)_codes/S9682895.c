
    #include<stdio.h>
    main()
    {
        int choice ;
        int i ;
        int even;
        int odd ;
        scanf("%d",&choice) ;
        int a[choice] ;
        even=0 ;
        odd=0 ;
        for(i=0;i<choice;i++)
        {
            scanf("%d",&a[i]) ;
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
    

