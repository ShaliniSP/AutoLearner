
    #include<stdio.h>
    int main()
    {
    	int n;
    	int i;
    	int arr[n];
    	int count=0;
    	int count1=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&arr[i]);
    		if((arr[i]%2)==0)
    		{
    			count++;
    		}
    		else
    		{
    			count1++;
    		}
    	}
    	if(count>count1)
    	printf("Ready for Battle");
    	else
    	printf("Not Ready");
            return 0;
    }

