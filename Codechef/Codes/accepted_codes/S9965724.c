
    #include <stdio.h>
    
    int main(void) {
    	// your code goes here
    	int n,even=0,odd=0,i;
    	scanf("%d",&n);
    	int army[n];
    	for(i=0;i<n;i++){
    	    scanf("%d",&army[i]);
    	    if(army[i]%2==0)
    	        even++;
    	    else
    	        odd++;
    	}
    	if(even>odd)
    	    printf("READY FOR BATTLE");
    	else
    	    printf("NOT READY");
    	return 0;
    }
    
    

