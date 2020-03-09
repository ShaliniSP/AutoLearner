
    #include<stdio.h>
    main()
    {
    	int n,i,a[100],lucky=0,unlucky=0;
    	scanf("%d\n",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    		{
    			lucky++;
    		}
    		else
    		{
    			unlucky++;
    		}
    	}
    	if(lucky>unlucky)
    	{
    		printf("ready for battle");
    	}
    	else
    	{
    		printf("not ready");
    	}
    }

