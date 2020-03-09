
    #include<stdio.h>
    
    int main()
    {
    	int t,count_even=0,count_odd=0;
    	scanf("%d",&t);
    	int a[t],i;
    	for(i=0;i<t;i++)
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

