
    #include<stdio.h>
    int main()
    {
    	int s,w,i;
    	int odd=0,even=0;
    	scanf("%d",&s);
    	for(i=0;i<s;i++)
    	{
    		scanf("%d",&w);
    	
    	}
    	for(i=0;i<s;i++)
    	{
    	
    			if(w%2==0)
    				even++;
    			else
    				odd++;
    }
    		if(even>odd)
    			printf("READY FOR BATTLE");
    		else
    			printf("NOT READY");
    		
     
    	return 0;
    } 

