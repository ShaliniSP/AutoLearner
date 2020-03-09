
    #include<stdio.h>
    int main()
    {
    	int i,n,e,o,h;
    	e=o=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{   scanf("%d",&h);
    		if(h%2==0)
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

