
        #include<stdio.h>
        main()
        {
        int n, a[100], sum=0,i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        scanf("%d ",&a[i]);
        }
        for(i=0;i<n;i++)
        {
        sum =sum+a[i];
        }
        if (sum%2==0 && n%2==0)
        {printf("READY FOR BATTLE");
        }
        else
        printf("NOT READY");
        } 

