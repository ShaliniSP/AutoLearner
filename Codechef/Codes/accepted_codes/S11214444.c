
    #include<stdio.h>
    int main()
    {
    	int n,a[100],i,count1=0,count2=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    		count1=count1+1;
    		else
    		count2=count2+1;
    	}
    		if(count1>count2)
    		printf("READY FOR BATTLE\n");
    		else
    		printf("NOT READY\n");
           return 0;
    }

