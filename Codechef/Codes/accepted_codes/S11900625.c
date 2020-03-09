
    #include <stdio.h>
    int main()
    {
    	int n;
    	scanf("%d",&n);
    	int x,even=0,odd=0,i;
    	for (i = 1; i <= n; ++i)
    	{
    		scanf("%d",&x);
    		if(x%2==0)
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

