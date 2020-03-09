
    #include<stdio.h>
    int main()
    {
    	int n,i,count=0,s=0;
    	scanf("%d",&n);
    	int a[101];
    	for(i=1;i<=n;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    			count++;
    		else
    			s++;
    	}
    	if(count>s)
    		printf("READY FOR BATTEL");
    	else
    		printf("NOT READY");
    	return 0;
    }

