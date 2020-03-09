
    #include<stdio.h>
    int main()
    {
    	int n,a,k=0,j=0;
    	scanf("%d",&n);
    	if(n<=100)
    	{
    	while(n--)
    	{
    		scanf("%d",&a);
    		if(a%2==0)
    		k++;
    		else
    		j++;
    	}
    }
    	if(k>j)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	return 0;	
    }

