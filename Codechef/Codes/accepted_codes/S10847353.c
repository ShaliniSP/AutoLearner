
    #include <stdio.h>
    
    int main(void) {
    	// your code goes here
    	int n,e=0,o=0,i;
    	scanf("%d",&n);
    	while(n--)
    	{
    	    scanf("%d",&i);
    	    if(i%2 == 0)
    	        e++;
    	    else
    	        o++;
    	}
    	if(e>o)
    	    printf("READY FOR BATTLE");
    	else
    	    printf("NOT READY");
    	return 0;
    }
    
    

