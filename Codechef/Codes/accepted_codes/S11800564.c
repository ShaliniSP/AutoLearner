
    #include<stdio.h>
    int main()
    {
    	int i,n,l=0,u=0;
    	scanf("%d",&n);
    	int a[n+1];
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    		l++;
    		else
    		u++;
    	}
    	if(l>u)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	return 0;
    }
    

