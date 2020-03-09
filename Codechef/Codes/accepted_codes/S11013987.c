
    // Mahasena
    
    #include<stdio.h>
    int main(void)
    {
    	int i,n,arr[100],count;
    	scanf("%d",&n);
    	if((n>=1)&&(n<=100))
    	{
    		count = 0;
    		for(i = 0;i<n;i++)
    		{
    			scanf("%d",&arr[i]);
    			if((arr[i]>=1)&&(arr[i]<=100))
    			{
    				if(arr[i]%2==0)
    				{
    					count += 1;
    				}
    			}
    		}
    		if(count>(n-count))
    		{
    			printf("READY FOR BATTLE\n");
    		}
    		else
    		{
    			printf("NOT READY\n");
    		}
    	}
    	return 0;
    }

