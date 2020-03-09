
    #include<stdio.h>
    {
    	int n,i,k,even=0,odd=0;
    	scanf("%d",&n);
    	
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",k);
    		if(k%2==0)
    			even++;
    		else 
    			odd++;
    	}	
    	
    	if(even>odd)
    		printf("READY");
    	else 
    		printf("NOT READY");
    		
    }

