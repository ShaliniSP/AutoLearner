
    #include<stdio.h>
    
    int main()
    {
    	int i,j, n, a[100], cl=0,cu=0;
    	scanf("%d", &n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d", &a[i]);
    		if(a[i]%2==0)
    		{
    			cl++;
    		}
    		else
    		{
    			cu++;
    		}
    		
    	}
    	if(cl>cu)
    	{
    		printf("READY FOR BATTLE");
    	}
    	else
    	{
    		printf("NOT READY");
    	}
    	
    	return 0;
    }

