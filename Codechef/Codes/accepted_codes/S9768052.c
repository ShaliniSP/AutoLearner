
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
    	int i,n,ce=0,co=0;
    	scanf("%d",&n);
    	int a[n];
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

