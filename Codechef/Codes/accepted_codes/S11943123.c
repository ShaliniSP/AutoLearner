
    #include<stdio.h>
    int main()
    {
    	int n,a[100],i,c1=0,c2=0;
    	scanf("%d",&n);
    	
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    		c2++;
    		else
    		c1++;
    	}
    	
    	if(c2>c1)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	
    	return 0;
    }

