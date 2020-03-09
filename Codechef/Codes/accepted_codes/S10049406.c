
    #include <stdio.h>
    int main(){
    	int n, i, eve=0, odd=0;
    	scanf("%d", &n);
    	int a[n];
    	for(i=0 ; i<n ; i++){
    		scanf("%d", &a[i]);
    	}
    	for(i=0 ; i<n ; i++){
    		if(a[i]%2==0)
    			eve++;
    		else
    			odd++;
    	}
    	if(eve>odd)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	return 0;
    }

