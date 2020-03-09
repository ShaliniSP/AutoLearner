
    #include<stdio.h>
    #include<math.h>
    main()
    {
    	int n,i,e,o;
    	int arr[n];
    	scanf("%d",&n);
    	for(i=0;i<=n;i++)
    	{
    		scanf("%d",&arr[i]);
    		if(arr[i]%2==0)
    		e+=1;
    		else
    		o+=1;
    		if(e>o)
    		printf("READY FOR BATTLE");
    		else
    		printf("NOT READY");
    	}
    }

