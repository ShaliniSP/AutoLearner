
    #include<stdio.h>
    int main()
    {
    	int t,i,a,c=0,count=0;
    	scanf("%d",&t);
    	for(i=0;i<t;i++)
    	{
    		scanf("%d",&a);
    		if((a%2)==0)
    		count++;
    		else
    		c++;
    	}
    	if(count>c)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    	
    	
    }

