
    #include <stdio.h>
    #include <string.h>
    
    int main(int argc, char const *argv[])
    {
    	int t, n, l = 0, u = 0;
    	scanf("%d",&t);
    	while(t--) {
    		scanf("%d",&n);
    		if(n%2 == 0)
    			l++;
    		else
    			u++;
    	}
    	if(l > u)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	return 0;
    }

