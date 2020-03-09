
    #include<stdio.h>
    int main()
    {
    	int a[100],even,i,n;
    	scanf("%d\n",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    			if(a[i]%2!=0)
    		even++;
    	}
    	
    	if(even<=n/2)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    }

