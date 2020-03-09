
    #include<stdio.h>
    int main()
    {
    	int i,odd=0,n,even=0;
    	scanf("%d",&n);
    	int sol[n];
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&sol[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    		if(sol[i]%2==0)
    		even++;
    		else
    		odd++;
    	}
    	if(even>odd)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	
    	return 0;
    }

