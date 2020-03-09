
    #include<stdio.h>
    main()
    {
        int N,e=0,o=0,i;
        scanf("%d",&N);
        int A[N];
        for(i=0;i<N;i++)
            scanf("%d",&A[i]);
        for(i=0;i<N;i++)
        {
            if(A[i]%2==0)
                e++;
            else
                o++;
        }
        if(e>o)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
    }
    

