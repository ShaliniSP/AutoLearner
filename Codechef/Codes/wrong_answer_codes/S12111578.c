
    #include<stdio.h>
    int main()
    {
    	int i,s,n,o=0;
    	scanf("%d",&s);
    	for(i=0;i<s;i++)
    	{
    		scanf("%d",&n);
    		o+=n%2;
    	}
    	if(n-o>o)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY FOR BATTLE");
    	return 0;
    }

