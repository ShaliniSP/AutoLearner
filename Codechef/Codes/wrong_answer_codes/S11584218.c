
    #include <stdio.h>
    
    int main(void) {
    	int n,e=0,o=0,i,w;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&w);
    		if(w%2==0)
    		e++;
    		else
    		o++;
    	}
    	if(e>o)
    	printf("Ready for Battle");
    	else
    	printf("Not Ready");
    	return 0;
    }

