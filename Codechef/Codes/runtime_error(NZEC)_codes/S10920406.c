
    #include<stdio.h>
    void main()
    {
    	int N,i,b=0,c=0;
    	int A[100];
    	scanf("%d",&N);
    	for(i=1;i<=N;i++)
    	{
    		scanf("%d",&A[i]);
    	}
    	for(i=1;i<=N;i++)
    	{
    		if(A[i]%2==0)
    
    			b=b+1;
    
    		else
    			c++;
    	}
    	if(b<=c)
    		printf("not ready");
    	else
    		printf("ready for battle");
    
    }
    

