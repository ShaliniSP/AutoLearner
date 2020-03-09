
    #include<stdio.h>
    int main()
    {
    	int n;
    	scanf("%d",&n);
    	int a[n],i;int c=0;
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",a[i]);
    		if(a[i]%2==0)
    			c++;
    	}
    	if(c>(n-c))
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	return 0;	
    	
    }

