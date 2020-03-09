
    #include<stdio.h>
    
    int main()
    {
    	int i=0,N,A[100],even=0,odd=0;
    	scanf("%d",&N);
    	for(i=0;i<N;i++)
    	{
    		scanf("%d",&A[i]);
    		if(A[i]%2==0)
    		even++;
    		else
    		odd++;
    	}
    	if(even>odd)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	return 0;
    }

