
    #include <stdio.h>
    
    int main()
    {
    	int t,co=0,ce=0,a;
    	scanf("%d",&t);
    	while(t--)
    	{
    		scanf("%d",&a);
    		if(a%2==0)
    		ce++; 
    		else co++;
    	}
    	if(ce>co)
    	printf("READY FOR BATTLE");
    	else printf("NOT READY");
    	return 0;
    }

