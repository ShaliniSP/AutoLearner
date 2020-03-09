
    #include<stdio.h>
    int main()
    {
    	/* code */
    	int n,s[100],i,count=0,less=0;
    	scanf("%d",&n);
    	if(n<=100)
    	{
    		for(i=0;i<n;i++)
    	{
    		scanf("%d",&s[i]);
    		if (s[i]%2==0)
    			count++;
    		else
    			less++;
    	}
    	}
    	if (count>less)
    		printf("Ready for battle\n");
    	else
    		printf("Not ready");
    	
    	
    	return 0;
    }
    

