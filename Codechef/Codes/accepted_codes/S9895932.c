
    #include <stdio.h>
    
    int main(void) {
    	// your code goes here
    	int n,i;
    	scanf("%d",&n);
    	int a[n];
    	for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    	int x=0,y=0;
    	for(i=0;i<n;i++)
    	{
    	    if(a[i]%2==0)
    	    {
    	    x++;
    	    }
    	    else
    	    {
    	    y++;
    	    }
    	}
    	if(x>y)
    	{
    	    printf("READY FOR BATTLE");
    	}
    	else
    	{
    	    printf("NOT READY");
    	}
    	return 0;
    }
    

