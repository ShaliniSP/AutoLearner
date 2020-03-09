
    #include<stdio.h>
    main()
    {
    	int t,A[100],i,j=0,k=0,l;
    	scanf("%d",&t);
    	for(i=0;i<t;i++)
    	{
    		scanf("%d",&A[i]);
    		if(A[i]%2==0)
    		{
    			j++;
    		}
    		else
    		{
    			k++;
    		}
    	}
    	if(j>k)
    	{
    		printf("READY FOR BATTLE");
    	}
    	else
    	{
    		printf("NOT READY");
    	}
    }

