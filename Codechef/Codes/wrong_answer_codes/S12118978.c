
    #include<stdio.h>
    main()
    {
    	int n,i,j,sum=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&j);
    		sum+=j;
    	}
    	if(sum%2==0)
    	{
    		printf("READY FOR BATTLE\n");
    	}
    	else
    		printf("NOT READY\n");
    	return 0;
    }

