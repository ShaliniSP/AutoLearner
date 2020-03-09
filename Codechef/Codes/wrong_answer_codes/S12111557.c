
    #include<stdio.h>
    int main()
    {
    	int i,s,n,o=0,e=0;
    	scanf("%d",&s);
    	for(i=0;i<s;i++)
    	{
    		scanf("%d",&n);
    		if(n%2==1)
    		o++;
    		else
    		e++;
    	}
    	if(e>o)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY FOR BATTLE");
    	return 0;
    }

