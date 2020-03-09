
    #include <stdio.h>
    int main()
    {
    	int n,a[100],i,odd=0,even=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2!=0)
    			odd++;
    		else
    			even++;
    	}
    	if(even>odd)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	return 0;
    }
    			
    

