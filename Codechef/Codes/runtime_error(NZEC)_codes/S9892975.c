
    #include<stdio.h>
    main()
    {
    int i,aeven=0,aodd=0,N;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    aeven++;
    else
    aodd++;
    }
    if(aeven>aodd)
    printf("READY FOR BATTLE\n");
    else 
    printf("NOT READY\n");
    }

