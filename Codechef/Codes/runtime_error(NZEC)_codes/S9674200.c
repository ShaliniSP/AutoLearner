
    //mahasena
    #include<stdio.h>
    main()
    {
    	
    	int t;
    	scanf("%d",&t);
    	while(t&&t<=100)
    	{
    		int ar[t];
    		int i=0;
    		for(i=0;i<t;i++)
    		scanf("%d",&ar[i]);
    		int lucky=0,unlucky=0;
    		for(i=0;i<t;i++)
    		{
    			if(ar[i]%2==0)
    			lucky++;
    			else
    			unlucky++;
    		}
    		if(lucky>unlucky)
    		printf("READY FOR BATTLE\n");
    		else
    		printf("NOT READY\n");
    		
    		break;
    	}
    }	
    

