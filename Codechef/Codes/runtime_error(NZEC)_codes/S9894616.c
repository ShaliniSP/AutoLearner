
    #include<stdio.h>
    void main()
    {
    	int N, A[100], even, odd, i;
    	scanf("%d",&N);
     
    	for(i=0;i<N;i++)
    	{
    		scanf("%d",&A[i]);
    		if(A[i]/2==0)
    		{
    			even++;
    		}
    		
    	}
    	
    	odd=N-even;
    	
    	if(even>odd)
    	{
    	printf("READY FOR BATTLE");
    	}
    	else
    	{
    	printf("NOT READY");
    	}
    	
    }
    	  

