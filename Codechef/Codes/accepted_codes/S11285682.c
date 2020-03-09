
    #include<stdio.h>
    int main()
    {
    	int n,i,count,counter;
    	scanf("%d",&n);
    	int a[n];
    	count=0;
    	counter=0;
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2)
    		{
    			counter++;
    		}
    		else
    		{
    			count++;
    		}
    	}
    	if(counter>=count)
    	{
    		printf("NOT READY\n");
    	}
    	else
    	{
    		printf("READY FOR BATTLE\n");
    	}
    	return 0;
    }

