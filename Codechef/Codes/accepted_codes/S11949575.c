
    #include <stdio.h>
     
    int main(void) {
    	// your code goes here
    	int n,a[100],i,odd=0,even=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",&a[i]);
    	    if((a[i]%2)==0)
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
    	    	printf("NOT READY");
    	return 0;
    }
     

