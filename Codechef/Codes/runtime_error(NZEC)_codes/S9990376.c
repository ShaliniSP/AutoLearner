
    #include<stdio.h>
    main()
    {
    	int n,a[100],c=0,m=0,i;
    	scanf("%d\n",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		if((a[i]%2)==0)
    		{
    			++c;
    		}
    		else
    		{
    			++m;
    		}
    	}
    	if(c>m)
    	{
    		printf("READY FOR BATTLE");
    	}
    	else
    	{
    		printf("NOT READY");
    	}
    	
    }

