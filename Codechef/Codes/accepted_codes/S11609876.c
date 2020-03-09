
    #include <stdio.h>
    int main()
    {
    	int N,i;
    	scanf("%d",&N);
    	int a,oddcount=0,evencount=0;
    	for (i = 0; i < N; i++)
    	{
    		scanf("%d",&a);
    		if (a%2==0)
    		{
    			evencount++;
    		}
    		else
    		{
    			oddcount++;
    		}
    	}
    	if (evencount>oddcount)
    	{
    		printf("READY FOR BATTLE");
    	}
    	else
    	{
    		printf("NOT READY");
    	}
    	return 0;
    }
    

