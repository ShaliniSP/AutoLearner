
    #include <stdio.h>
    int main(void) 
    {
    	int t, n, o=0, e=0;
    	scanf("%d", &t);
    	n=t;
    	while(t--) 
    	{
    	    scanf("%d", &e);
    	    if (e%2!=0)
    	    {
    	        o++;
    	    }
    	}
    	e=n-o;
    	if (e > o) 
    	{
    	    printf ("READY FOR BATTLE");
    	}
    	else
    	{
    	    printf ("NOT READY");
    	}
    	return 0;
    }

