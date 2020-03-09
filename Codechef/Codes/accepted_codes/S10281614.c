
    #include<stdio.h>
    int main()
    {
    	int i,j,c=0,k=0,n,a[101];
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    		c++;
    		else
    		k++;
    	}
    	if(c>k)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    	
    }

