
    #include<stdio.h>
    main()
    {
    	int n,in,eve=0,odd=0;
    	scanf("%d",&n);
    	while(n--)
    	{
    		scanf("%d",&in);
    		if(in%2==0)
    		eve++;
    		else
    		odd++;	
    	}
    	if(eve>odd)	
    	printf("\nREADY FOR BATTLE");
    	else
    	printf("\nNOT READY FOR BATTLE");
    }
    

