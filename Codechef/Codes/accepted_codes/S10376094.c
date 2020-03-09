
    #include <stdio.h>
    #include <stdlib.h>
    
    int main(void) {
    	int i,wep;
    	scanf("%d",&i);
    	int count =0;
    	while(i--){
    		scanf("%d",&wep);
    		if(!(wep%2))
    			count++;
    		else
    			count--;
    	}
    	if(count>0)
    		printf("READY FOR BATTLE");
    	else
    		printf("NOT READY");
    	return 0;
    }
    

