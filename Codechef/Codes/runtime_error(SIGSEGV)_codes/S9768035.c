
    #include<stdio.h>
    int main()
    {
    	int i,j,n,a[50],ce=0,co=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    			ce++;
    		else
    			co++;
    	}
    	if(ce>co)
    		printf("READY FOR BATTLE");
    	else
    		printf("NOT READY");
    	return 0;
    }

