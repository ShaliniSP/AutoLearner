
    #include<stdio.h>
    #include<stdlib.h>
    
    int main()
    {
    	short int N,i,ready,not_ready;
    	short int *A;
    	scanf("%d",&N);
    	ready=0;
    	not_ready=0;
    	A=(short int*) malloc(sizeof(short int)*N);
    	for(i=0;i<N;i++)
    	{
    		scanf("%d",&A[i]);
    		if(A[i]%2)
    		not_ready++;
    		else
    		ready++;
    	}
    	if(ready>not_ready)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    }
    

