
    #include<stdio.h>
    #include<stdlib.h>
    
    int main()
    {
    	
    	int N;
    	int A[5];
    	int i,c=0,b=0;
    	
    	
    	scanf("%d",&N);
    	
    	for(i=0;i<N;i++)
    	
    	scanf("%d",&A[i]);
    	
    	for(i=0;i<N;i++)
    	{
    		if(A[i]%2==0)
    			c++;
    		else
    			b++;
    	
    	}
    	if(c>b)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    return 0;	
    }

