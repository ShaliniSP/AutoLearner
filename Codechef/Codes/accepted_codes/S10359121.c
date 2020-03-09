
    #include<stdio.h>
    int main()
    {
    	int n,odd=0,even=0,temp,i;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&temp);
    		if(temp%2==0)
    		{
    			even++;
    		}
    		else
    		{
    			odd++;
    		}
    	}
    	if(even>odd)
    	{
    		printf("READY FOR BATTLE");
    	}
    	else
    	{
    		printf("NOT READY");
    	}
    	return 0;
    }

