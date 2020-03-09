
    #include<stdio.h>
    int main()
    {
    	int a[100],n,i,p=0,q=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    		p++;
    		else
    		q++;
    	}
    	if(p>q)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    }

