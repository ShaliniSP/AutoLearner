
    #include<stdio.h>
    int main()
    {
    	int n;
    	scanf("%d",&n);
    	int a[n];
    	int i,count=0,count1=0;
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    		count++;
    		else
    		count1++;
    	}
    	if(count>count1)
    	   printf("READY FOR BATTLE");
    	   else
    	   printf("NOT READY");
    	   return 0;
    	return 0;
    }

