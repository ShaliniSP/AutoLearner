
    #include <stdio.h>
    
    int main(void) {
    	// your code goes here
    	int n,a,ne=0,no=0;
    	scanf("%d",&n);
    	while(n-->0)
    	{
    	    scanf("%d",&a);
    	    if(a%2==0)
    	    ne++;
    	    else
    	    no++;
    	}
    	if(ne>no)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    	
    }
    

