
    #include<stdio.h>
    main()
    {
       short int N,A[99],i,m=0,n=0;
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",&A[i]);
        }
        for(i=0;i<N;i++)
        {
            if(A[i]%2==0)
                m++;
            else
                n++;
        }
        if(m>n)
            printf("\nREADY FOR BATTLE");
        else
            printf("\nNOT READY");
    
    
    
    }
    

