
    #include<stdio.h>
    int main()
    {
    	long long int n,e=0,o=0;
    	scanf("%lld",&n);
    	long long int a[n+10];
    	while(n--)
    	{
    		scanf("%lld",&a[n]);
    		if(a[n]%2==0)
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
    		printf("READY FOR BATTLE\n");
    	}
    	else
    	{
    		printf("NOT READY\n");
    	}
    	return 0;
    }

