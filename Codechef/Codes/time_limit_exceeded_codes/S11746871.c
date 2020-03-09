
    #include <stdio.h>
    
    int main(void) {
    	// your code goes here
    	int n,c = 0,d = 0;
    	scanf("%d",&n);
    	while(n>0){
            int y;
            scanf("%d",&y);
            if(y % 2 == 0){
                c++;
            } else {
                n++;
            }
    	    n--;
    	}
    	if(c > d){
    	    printf("%s\n","READY FOR BATTLE");
    	} else {
    	    printf("%s\n","NOT READY");
    	}
    	return 0;
    }
    
    

