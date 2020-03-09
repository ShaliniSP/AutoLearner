
    #include<stdio.h>
    int main(void)
    {
    	int i,j,n,t,x=0,y=0;
    	scanf("%d",&t);
    	for(i=0;i<t;i++)
    	{
    		scanf("%d",&n);
    		if(n%2==0)
    		x++;
    		else
    		y++;
    	}
    	if(x>y)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	return 0;
    }

