
    #include<stdio.h>
    int main()
    {
    	int i,a,b,c=0;
    	scanf("%d",&a);
    	for(i=0;i<a;i++)
    	{
    		scanf("%d",&b);
    		if(b%2==0)
    			c++;
    	}
    	if(c>a-c)
    		printf("READY FOR BATTLE");
    	else
    		printf("NOT READY");
    	return 0;
    }
    

