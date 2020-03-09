
    #include<stdio.h>
    main()
    {
    int a,b=0,c=0,i,d;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
    scanf("%d",&d);
    if(d%2==0)
    c++;
    else
    b++;
    }
    if(c>b)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY FOR BATTLE");
    }

