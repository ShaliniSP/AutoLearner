
    #include <stdio.h>
    int main(){
    	int t, n, counto = 0, counte = 0;
    	scanf("%d", &t);
    	while (t--){
    		scanf("%d", &n);
    		if (n % 2 == 0)
    			counte++;
    		else
    			counto++; 
    	}
    	if (counte > counto)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	return 0; 
    	}
    

