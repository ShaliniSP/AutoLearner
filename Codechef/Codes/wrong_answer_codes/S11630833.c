
    #include<stdio.h>
    int main()
    {
    	int n,i,count=0,count1;
    	scanf("%d",&n);
    	int a[n];
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
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

