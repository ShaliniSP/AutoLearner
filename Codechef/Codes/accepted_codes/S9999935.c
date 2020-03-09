
    #include <stdio.h>
    
    int main(void) {
    	int n, num, even, odd;
    	even=odd=0;
    	scanf("%d", &n);
    	while(n--){
    	    scanf("%d", &num);
    	    if(num%2==0) even++;
    	    else odd++;
    	}
    	if(even>odd) printf("%s", "READY FOR BATTLE");
    	else printf("%s", "NOT READY");
    	return 0;
    }
    

