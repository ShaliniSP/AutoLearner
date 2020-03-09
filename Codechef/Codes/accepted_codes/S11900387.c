
    #include<stdio.h>
    int main()
    {
    	int t,a[101],c=0,d=0,i;
    	scanf("%d",&t);
    	for(i=0;i<t;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i<t;i++)
    	{
    		if(a[i]%2==0)
    		c++;
    		else
    		d++;
    	}
    	if(c>d)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    }

