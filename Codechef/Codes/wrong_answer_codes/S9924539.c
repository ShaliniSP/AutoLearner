
    #include<stdio.h>
    void main()
    {
    	int t,a[100],n,i,k=0,l=0;
    	scanf("%d",&t);
    	while(t--)
    	{
    		scanf("%d",&n);
    		for(i=0;i<n;i++)
    		{
    			scanf("%d",&a[i]);
    		}
    		for(i=0;i<n;i++)
    		{
    			if(a[i]%2==0)
    			k++;
    			else
    			l++;
    		}
    		if(k>l)
    		printf("READY FOR BATTLE\n");
    		else
    		printf("NOT READY\n");
    	}
    }

