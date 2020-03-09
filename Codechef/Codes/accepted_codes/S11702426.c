
    #include<stdio.h>
    int main()
    {
    	int n,i,e=0,l;
    	scanf("%d",&n);
    	for(i=1;i<=n;i++)
    	{
    		scanf("%d",&l);
    		if(l%2==0)
    			e++;
    		else
    			e--;
    	}
    	if(e>0)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	return 0;
    }

