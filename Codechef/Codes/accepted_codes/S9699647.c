
    #include <stdio.h>
    
    int main(void)
    {
    	int i,n,j,even,odd;
    	scanf("%d",&n);
    	even=0;
    	odd=0;
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&j);
    		if(j%2==0)
    		{
    			even++;
    		}
    		else
    		{
    			odd++;
    		}
    	}
    	if(even>odd)
    	{
    		printf("READY FOR BATTLE\n");
    	}
    	else
    	{
    		printf("NOT READY\n");
    	}
      return 0;
    }

