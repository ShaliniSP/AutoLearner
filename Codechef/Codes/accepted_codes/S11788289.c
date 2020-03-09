
    #include <stdio.h>
    
    int main(void) {
    	// your code goes here
    	int n, t, o = 0, e = 0;
    	scanf("%d",&n);
    	while(n>0){
    	    
    	    scanf("%d",&t);
    	    if(t % 2 == 0){
    	        e++;
    	    } else {
    	        o++;
    	    }
    	    
    	    n--;
    	}
    	if(e > o){
    	        printf("%s\n","READY FOR BATTLE");
    	    } else {
    	        printf("%s\n","NOT READY");
    	    }
    	return 0;
    }
    
    

