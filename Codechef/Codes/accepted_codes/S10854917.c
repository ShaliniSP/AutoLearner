
    #include<stdio.h>
    int main()
    {
    	int n;
    	scanf("%d",&n);
    	int a[n];
    	int i=0,count_even=0,count_odd=0;
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    			count_even++;
    		else
    			count_odd++;
    	}
    	if(count_even>count_odd)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	return 0;
    }
    
    

