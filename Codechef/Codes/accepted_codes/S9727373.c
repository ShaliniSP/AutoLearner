
    #include<stdio.h>
    int main()
    {
    	int e=0,o=0,n,a[100],i;
    	scanf("%d",&n);
    	for(i=0;i<=n-1;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    		e++;
    		else
    		o++;
    	}
    	if(e>o)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    }

