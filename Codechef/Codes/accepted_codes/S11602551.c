
    #include <stdio.h>
    
    int main(void) {
    	int n,i,s,even=0,odd=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",&s);
    	    if(s%2==0)
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
    	    printf("READY FOR BATTLE");
    	}
    	else
    	{
    	    printf("NOT READY");
    	}
    	return 0;
    }
    
    

