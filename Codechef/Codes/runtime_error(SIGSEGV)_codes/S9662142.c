
    #include<stdio.h>
    
    #include<math.h>
    int main()
    {
    	int N;
    	int A[10];
    	int i=0,c,b;
    	printf("no. of solidiers\n");
    	scanf("%d",N);
    	printf("weapons\n");
    	scanf("%d",A);
    	while(N--)
    	{
    		if(A[i]%2==0)
    			c++;
    		else
    			b++;
    	}
    	if(c>2)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	return 0;
    }
    

