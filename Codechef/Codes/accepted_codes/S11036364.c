
    #include<stdio.h>
    int main()
    {
    	int n,i,p,even=0,odd=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&p);
    		if(p%2==0)
    			++even;
    		else
    			++odd;
    	}
    	if(even>odd)
    		printf("%s\n","READY FOR BATTLE");
    	else
    		printf("%s\n","NOT READY" );
    	return 0;
    }

