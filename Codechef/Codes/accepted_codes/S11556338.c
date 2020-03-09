
    #include <stdio.h>
    
    int main (){
    	int N, angka, odd = 0, even = 0;
    	scanf ("%d", &N); fflush (stdin);
    	while (N--){
    		scanf ("%d", &angka); fflush (stdin);
    		if (angka % 2 == 0) even++;
    		else odd++;
    	}
    	if (even > odd) printf("READY FOR BATTLE");
    	else printf("NOT READY");
    	return 0;
    }

