
    #include<stdio.h>
    int main()
    {
    	int n,i;
    	scanf("%d",&n);
    	int a[n+1];
    	for(i=1;i<=n;i++)
    		scanf("%d",&a[i]);
    	int c1=0,c2=0;
    	i=1;
    	while(n--)
    	{
    		if(a[i]%2==0)
    			c1++;
    		else
    			c2++;
    	i++;
    	}
    	if(c1>c2)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    return 0;
    }
    

