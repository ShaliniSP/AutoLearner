
    #include<stdio.h>
    
    int main()
    {
    	int n,i,c1=0;
    	
    	scanf("%d",&n);
    	
    	int a[n];
    	
    	if(n>=1 && n<=100)
    	{
    		for(i=0;i<n;i++)
    			scanf("%d",&a[i]);
    	
    		for(i=0;i<n;i++)
    		{
    			if(a[i]%2==0)
    				c1++;
    			else
    				c1--;	
    		}
    		
    		if(c1>0)
    			printf("READY FOR BATTLE\n");
    		else
    		printf("NOT READY\n");		
    	}
    		
    	return 0;
    }

