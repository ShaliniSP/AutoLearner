
    #include<stdlib.h>
    #include<string.h>
    
    
    int main()
    {
    	{
    	int N;
    	int A[10];
    	int i=0,c,b;
    	printf("no. of solidiers\n");
    	scanf("%d",&N);
    	printf("weapons\n");
    	while(N--)
    
    	{
    	scanf("%d",&A[i]);
    	{
    		if(A[i]%2==0)
    			c++;
    		else
    			b++;
    	}
    	}
    	if(c>b)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	
    }
    	exit(0);
    }

