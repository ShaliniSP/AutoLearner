
    #include<stdio.h>
    int main()
    {
    	int n,arr[100],i;
    	int ce=0,co=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&arr[i]);
    		if(arr[i]%2==0)
    		{
    			ce++;
    		}
    		else
    		{
    			co++;
    		}
    	}
    	if(ce>co)
    	{
    		printf("READY FOR BATTLE");
    	}
    	else
    	{
    		printf("NOT READY");
    		
    	}
    	return 0;
    }

