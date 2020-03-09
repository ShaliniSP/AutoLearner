
    #include<stdio.h>
    main()
    {
    	int t,n,i,j=0,k=0;
    	
    		scanf("%d",&n);
    		int a[n];
    		for(i=0;i<n;i++)
    		{
    			scanf("%d",&a[i]);
    			if((a[i]%2)==0)
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
    			printf("READY FOR BATTLE\n");
    		}
    		else
    		{
    			printf("NOT READY\n");
    		}
    		
    		return 0;
    		
    } 

