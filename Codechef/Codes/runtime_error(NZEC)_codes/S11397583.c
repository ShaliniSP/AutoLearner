
    #include<stdio.h>
    int main()
    {
    	int N,A[100],i,x=0,y=0;
    	scanf("%d",&N);
    	for(i=0;i<N;i++)
    	{
    		scanf("%d",&A[i]);
    	}
    	for(i=0;i<N;i++)
    	{
    		if(A[i]%2==0)
    		{
    			x++;
    		}
    		else
    		{
    			y++;
    		}
    	}
    	if(x>y)
    	{
    		printf("READY FOR BATTLE");
    	}
    	else
    	{
    		printf("NOT READY");
    	}
    }

