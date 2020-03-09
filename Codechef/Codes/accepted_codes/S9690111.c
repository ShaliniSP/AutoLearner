
    #include<stdio.h>
    int main()
    {
    	int array[1000],i,n,counte=0,counto=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&array[i]);
    		if(array[i]%2==0)
    			counte++;
    		else
    			counto++;
    	}
    	if(counte>counto)
    		printf("READY FOR BATTLE");
    	else
    		printf("NOT READY");
    	return 0;
    }

