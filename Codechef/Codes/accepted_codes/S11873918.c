
    #include<stdio.h>
    int main()
    {
    int n,i,j[100],ecount=0,ocount=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    	{
    		scanf("%d",&j[i]);
    	}
    for(i=0;i<n;i++)
    	{
    		if(j[i]%2==0)
    			{
    				ecount++;
    			}
    		else
    			{
    				ocount++;
    			}
    	}
    if(ecount>ocount)
    	{
    		printf("READY FOR BATTLE");
    	}
    else
    	{
    	printf("NOT READY");
    	}
    return 0;
    }

