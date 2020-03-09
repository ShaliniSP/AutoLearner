
    int main(void) {
    	// your code goes here
    	int N, i=0, even=0, odd=0;
    	int *K;
    	
    	printf("Enter value of N\n");
    	scanf("%d",&N);
    	if ((N < 1) || (N > 100))
    	{
    	    printf("Value of N less than 1 and grater than 100\n");
    	    return 0;
    	}
    	
    	printf("Enter value of K[N]\n");
    	K = malloc(N*sizeof(int));
    	if (!K)
    	{
    	    printf("malloc is failed \n");
    	    return 0;
    	}
    	for (i= 0; i<N; i++)
    	{
    	    	scanf("%d",&K[i]);
    	    	if ((K[i] < 1) || (K[i] > 100))
    	    	{
    	        	printf("Value of Ki less than 1 and greater than 100\n");
    	        	return 0;
    	    	}
    	    	K[i]%2 == 0 ? even++:odd++;
    	}
    	
    	if (even > odd)
    	{
    		printf("READY FOR BATTLE\n");
       	}
        	else
        	{
            	printf("NOT READY\n");
        	}
        	
    	getch();
    	return 0;
    }

