
    #include <stdio.h>
    int main(int argc, char const *argv[])
    {
    	int n;
    	scanf("%d",&n);
    	int x,even=0,odd=0;
    	for (int i = 1; i <= n; ++i)
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

