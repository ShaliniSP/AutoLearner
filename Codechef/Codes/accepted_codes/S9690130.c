
    #include<stdio.h>
    int main()
    {
    	int array[100],i,n,counte=0,counto=0;
    	scanf("%d",&n);
    	if(n>=1 && n<=100)
    	{
    		for(i=0;i<n;i++)
    		{
    			scanf("%d",&array[i]);
    			if(array[i]>=1 && array[i]<=100)
    			{
    				if(array[i]%2==0)
    					counte++;
    				else
    					counto++;
    			}
    		}
    	}
    	else
    		exit(-1);
    	if(counte>counto)
    		printf("READY FOR BATTLE");
    	else
    		printf("NOT READY");
    	return 0;
    }

