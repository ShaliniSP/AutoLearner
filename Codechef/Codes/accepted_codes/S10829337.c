
    #include<stdio.h>
    main()
    {
    	int t,a,b,c=0,i;
    	scanf("%d",&t);
    	i=t;
    	while(t--)
    	{
    		scanf("%d",&b);
    		if(b&1)
    		c++;
    		
    		
    	}
    	a=i-c;
    	if(a>c)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    return 0;
    	
    }

