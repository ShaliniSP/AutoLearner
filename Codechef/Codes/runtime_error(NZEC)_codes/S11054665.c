
    #include<stdio.h>
    main()
    {
      int n,i,j,p=0,m=0;
      scanf("%d",&n);
      int a[n];
       for(i=0;i<n;i++)
       scanf("%d",&a[i]);
       for(j=0;j<n;j++)
       {
           if(a[j]%2==0)
            p++;
           else
            m++;
       }
       if(p>m)
        printf("READY FOR BATTLE");
       else
        printf("NOT READY");
    }
    

