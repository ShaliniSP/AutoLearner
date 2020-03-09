
    #include <stdio.h>
    
    int main(void) {
    	int N, c, l, u;
    	l = u = 0;
    	scanf("%i\n", &N);
    	while(N--){
    	    scanf("%i", &c);
    	    c & 1 ? u++ : l++;
    	}
    	printf("%s\n", l > u ? "READY FOR BATTLE" : "NOT READY");
    	return 0;
    }
    
    

