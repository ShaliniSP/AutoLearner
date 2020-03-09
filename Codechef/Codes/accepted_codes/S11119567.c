
    /* name: Doan Huu An
    ID: SE04688
    Workshop:
    */
    #include <stdio.h>
    int main(){
    	int t, n, a = 0, b= 0;
    	scanf("%d", &t);
    	while (t--){
    		scanf("%d", &n);
    		if (n % 2 == 0)
    			b++;
    		else
    			a++; 
    	}
    	if (b> a)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	return 0; 
    	}
    

