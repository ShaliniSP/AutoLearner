
    #include<stdio.h>
    int main()
    {
    	int n,e=0,o=0;
    	scanf("%d",&n);
    	int a[n],i;
    	for(i=0;i<n;i++)
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

