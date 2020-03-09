
    #include<stdio.h>
    int main()
    {
    	int tmp,i,n,counte=0,counto=0;
    	scanf("%d",&n);
    	if(n>=1 && n<=100)
    	{
    		for(i=0;i<n;i++)
    		{
    			scanf("%d",&tmp);
    			if(tmp>=1 && tmp[i]<=100)
    			{
    				if(tmp%2==0)
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

