
        #include <stdio.h>
         
        int main(void) {
        	// your code goes here
        	int t, i, o = 0, e;
        	
        	scanf ("%d", &t);
        	
        	i = t;
        	
        	while (t--) {
        	    scanf ("%d", &e);
        	    if (e&1) {
        	        ++o;
        	    }
        	}
        	
        	e = i - o;
        	
        	if (e > o) {
        	    printf ("READY FOR BATTLE");
        	} else {
        	    printf ("NOT READY");
        	}
        	return 0;
        }
         
    

