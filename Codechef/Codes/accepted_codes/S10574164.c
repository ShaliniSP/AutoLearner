
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
    	int n, A[104], i, count = 0, count1 = 0;
    	scanf("%d", &n);
    
    	for (i = 0;i < n;i++)
    	{
    		scanf("%d", &A[i]);
    	}
    
    	for (i = 0;i < n;i++)
    	{
    		if (A[i] % 2 == 0)
    			count++;
    		else if (A[i] % 2 != 0)
    			count1++;
    	}
    
    	if (count > count1)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    
    	return 0;
    }

