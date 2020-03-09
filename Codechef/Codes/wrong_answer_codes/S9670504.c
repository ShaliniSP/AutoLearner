
    #include<stdio.h>
    
    int main()
    {
    	int i,j,r,a[100],even,odd,n;
    	printf("enter the number of warriors\n");
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		printf("enter the number of weapons with %d th warrior ",i+1);
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    		r=a[i]%2;
    		if(r==0)
    		{ even=even+1;}
    		else odd=odd+1;
    	}
    	if(even>>odd)
    	printf("\nReady for Battle");
    	else
    	printf("\nNot ready for battle");
    
    	return 0;
    }
    

