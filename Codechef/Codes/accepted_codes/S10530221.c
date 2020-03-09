
    #include<stdio.h>
    int main()
    {
    	int n;
    	scanf("%d",&n);
    	int i,a[n];
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	int coe=0,coo=0;
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    		{
    			coe++;
    		}
    	}
    	coo=n-coe;
    	if(coe>coo)
    	{
    		printf("READY FOR BATTLE\n");
    	}
    	else
    	{
    		printf("NOT READY\n");
    	}
    	return 0;
    }

