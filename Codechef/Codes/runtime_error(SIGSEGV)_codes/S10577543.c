
    #include<stdio.h>
    int main()
    {
    	int N,A[N],i,cnt=0;
    	scanf("%d",&N);
    	for(i=1;i<=N;i++)
    	{
    		scanf("%d",&A[i]);
    	}
    	for(i=1;i<=N;i++)
    	{
    	if(A[i]%2==0)
    	{
    	cnt++;
    	if(cnt==N)
    	printf("READY FOR BATTLE");
    	}
    else
    {
    printf("NOT READY");	
    }
    
    }
    }
    
    
    
    
    

