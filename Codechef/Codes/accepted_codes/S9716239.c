
    #include<stdio.h>
    int main()
    {
    	int a[100],i,n,ce=0,co=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    			ce++;
    		else 
    			co++;
    	}
    	if(ce>co)
    		printf("\nREADY FOR BATTLE");
    	else
    		printf("\nNOT READY");
    	return 0;
    }

