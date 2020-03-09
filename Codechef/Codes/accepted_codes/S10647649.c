
    #include<stdio.h>
    int main()
    {
    	int t,i,c=0;
    	int a[1000];
    	scanf("%d",&t);
    	for(i=0;i<t;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i] % 2 == 0)
    			c++;
    	}
    	if(c>t-c)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	return 0;
    }
    

