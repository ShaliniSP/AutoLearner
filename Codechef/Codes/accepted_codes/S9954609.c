
    #include<stdio.h>
    int main()
    {
    	int t;
    	scanf("%d",&t);
    	int a[t],i,e=0,o=0;
    	for(i=0;i<t;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i<t;i++)
    	{
    		if(a[i]%2==0)
    		{
    			e++;
    		}
    		else
    		{
    			o++;
    		}
    	}
    	if(e>o)
    	{
    		printf("READY FOR BATTLE");
    	}
    	else
    	{
    		printf("NOT READY");
    	}
    	return 0;
    }

