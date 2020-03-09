
    #include<stdio.h>
    main()
    {
    	int t,a[100],b,c=0,d=0,i;
    	scanf("%d",&t);
    	while(t--)
    	{
    		scanf("%d",&b);
    		if(b%2==0)
    		c++;
    		else
    		d++;
    		
    		
    	}
    	if(c>d)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	
    }

