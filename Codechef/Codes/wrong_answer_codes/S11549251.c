
    #include <stdio.h>
    int main ()
    {
    	int n,i,counte=0;
    	scanf ("%d",&n);
    	int arr[n];
    	for (i=0;i<n;i++)
    		scanf ("%d",&arr[i]);
    	for (i=0;i<n;i++)
    	{
    		if (arr[i]%2==0)
    			counte++;
    	}
    	if (counte>(n/2))
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY FOR BATTLE\n");
    	return 0;
    
    }

