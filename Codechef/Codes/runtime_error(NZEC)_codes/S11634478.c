
    #include<stdio.h>
    void main()
    {
    	/* code */
    	int n,s[n],i,count=0,less=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&s[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    		if (s[i]%2==0)
    			count++;
    		else
    			less++;
    	}
    	if (count>less)
    		printf("Ready for battle\n");
    	else
    		printf("Not ready");
    	return 0;
    }
    

