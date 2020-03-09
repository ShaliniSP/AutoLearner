
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    int main()
    {
    	{
    	int N;
    	int A[5];
    	int i,c,b;
    	printf("no. of solidiers\n");
    	scanf("%d",&N);
    	printf("weapons\n");
    	for(i=0;i<N;i++)
    	{
    	scanf("%d",&A[i]);
    		if(A[i]%2==0)
    			c++;
    		else
    			b++;
    	
    	}
    	if(c>b)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	
    }
    	exit(0);	
    }

