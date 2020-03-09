
    #include<stdio.h>
    int main()
    {
    	int n;
    	int i;
    	int arr[20];
    	int count=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&arr[i]);
    		if((arr[i]%2)==0)
    		{
    			count++;
    		}
    	}
    	if(count>(n/2))
    	printf("Ready for Battle");
    	else
    	printf("Not Ready");
    	return 0;
    }

