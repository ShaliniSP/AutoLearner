
    #include<stdio.h>
    int main()
    {
    	int N,eve=0,odd=0,i,a[100];
    	scanf("%d",&N);
    	for(i=0;i<N;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i<N;i++)
    	{
    		if(a[i]%2==0)
    		eve++;
    		else
    		odd++;
    	}
    	if(eve>odd)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	
    	return(0);
    }

