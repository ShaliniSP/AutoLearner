
    #include<stdio.h>
    int main()
    {
    	int n,i,c=0,d=0;
    	scanf("%d",&n);
    	int a[n];
    	for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    		c++;
    		else
    		d++;
    	}
    	if(c>d)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	return 0;
    }

