
    #include<stdio.h>
    int main()
    {
    	int n,a[101],i,count1=0,count2=0;
    	scanf("%d",&n);
    	for(i=0;i<=n-1;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    		count1++;
    		else
    		count2++;
    	}
    	if(count1>count2)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	return 0;
    	
    }

