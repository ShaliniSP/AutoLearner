
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    int main()
    {
    	int n;
    	scanf("%d",&n);
    	int a[n],i,count=0;
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    		count++;
    	}
    	if(count>(n/2))
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    }

