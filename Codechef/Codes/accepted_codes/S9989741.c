
    #include <stdio.h>
    
    int main()
    {
    	int A[102],n,i,lucky,unlucky;
    	
    	lucky =0;
    	unlucky=0;
    	
    	scanf("%d",&n);
    	
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&A[i]);
    	}
    	
    	for(i=0;i<n;i++)
    	{
    		if(A[i]%2 == 0)
    		lucky++;
    		
    		else
    		unlucky++;
    	}
    	
    	if(lucky > unlucky)
    	printf("READY FOR BATTLE\n");
    	
    	else
    	printf("NOT READY\n");
    	
    	return 0;
    }
    

