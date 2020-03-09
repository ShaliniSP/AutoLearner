
    #include <stdio.h>
    
    int main()
    {
    	unsigned int N = 0, i = 0;
    	unsigned int A[100] = {0}, even_count = 0;
    	
    	scanf("%u", &N);
    
    	if( N < 1 || N > 100)
    		return 0;
    
    	for( i = 0;  i < N ; i++)
    	{
    		scanf("%u", &A[i]);
    		
    		if( A[i] % 2 == 0)
    			even_count++;
    	}
    
    	if( N - even_count >= even_count )
    		printf("NOT READY\n");
    	else
    		printf("READY FOR BATTLE\n");
    
    	return 0;
    }
    

