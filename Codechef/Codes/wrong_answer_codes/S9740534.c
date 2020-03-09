
    #include<stdio.h>
    int main()
    {
    	int s,i;
    	int w[100];
    	int odd=0,even=0;
    	scanf("%d",&s);
    	for(i=0;i<s;i++)
    	{
    		scanf("%d",&w[i]);
    		for(i=0;i<s;i++)
    		{
    			if(w[i]%2==0)
    				even++;
    			else
    				odd++;
    		}
    		if(even>odd)
    			printf("READY FOR BATTLE");
    		else
    			printf("NOT READY");
    		
    	}
    	return 0;
    }

