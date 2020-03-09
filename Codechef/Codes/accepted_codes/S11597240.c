
    #include <stdio.h>
     
    int main(void) {
    	int n,i,d,ec,oc;
    	scanf("%d",&n);
    	ec=oc=0;
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",&d);
    	    if(d%2 ==0)
    	    ec=ec+1;
    	    else
    	    oc=oc+1;
    	}
    	if(ec>oc)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY");
    	return 0;
    }

