
    #include<stdio.h>
    main()
    {
    int a[100],b=0,c=0,i,d,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    c++;
    else
    b++;
    }
    if(c>b)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    }

