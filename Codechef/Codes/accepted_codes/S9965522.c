
    #include<stdio.h>
    #include<math.h>
    int main()
    {
    	int n;
    	scanf("%d",&n);
    	int a;
    	int i;
    	int odd=0,even=0;
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a);
    		if(a%2==0)
    		{
    			even += 1;
    		}
    		else
    		{
    			odd += 1;
    		}
    	}
    	if(even>odd)
    	{
    		printf("READY FOR BATTLE\n");
    	}
    	else
    	{
    		printf("NOT READY\n");
    	}
    	return 0;
    }

