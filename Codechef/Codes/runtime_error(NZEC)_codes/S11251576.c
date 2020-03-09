
    #include<stdio.h>
    main()
    {
    	int n,i,count=0,b=0,a[200];
    	scanf("%d",&n);
    	for(i=1;i<=n;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    			count++;
    		else
    			b++;
    	}
    	if(count>b)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    }

