
    #include<stdio.h>
    main()
    {
    	int t,a,b,c=0,d=0,i;
    	scanf("%d",&t);
    	i=t/2;
    	while(t--)
    	{
    		scanf("%d",&b);
    		if(b&1)
    		c++;
    		
    		
    	}
    	a=c-i;
    	if(c>0)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    
    	
    }

