
    #include<stdio.h>
    int main()
    {
    	/* code */
    	int n,a[100],i,lucky=0,unlucky=0;
    	scanf("%d",&n);
    	if(n<=100)
    	{
    		for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		if (a[i]%2==0)
    			lucky++;
    		else
    			unlucky++;
    	}
    	}
    	if (lucky>unlucky)
    		printf("Ready for battle\n");
    	else
    		printf("Not ready");
    	
    	
    	return 0;
    }
    

