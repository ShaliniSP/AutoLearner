
    #include<stdio.h>
    int main()
    {
    	int a[100],i,count=0,count1=0,n;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    
    	}
        for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    		count++;
    		else
    		count1++;
    	}
    	if(count>count1)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    return 0;
    }
    

