
    #include <stdio.h>
    
    int main()
    {
    	int n, i, ne=0, no=0, k;
    	scanf ("%d",&n);
    	for (i=0; i<n; i++)
    	{
    		scanf ("%d",&k);
    		if (k%2==0)
    			ne++;
    		else
    			no++;
    	}
    	if (ne > no)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");	
    	return 0;
    }

