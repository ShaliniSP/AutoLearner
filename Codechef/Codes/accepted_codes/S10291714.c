
    #include <stdio.h>
    
    int main()
    {
    	int n, i, a;
    	scanf("%d", &n);
    	int even=0;
    	int odd=0;
    	for(i=0; i<n; i++){
    		scanf("%d", &a);
    
    		if(a%2==0){
    			even++;
    		}
    		if(a%2!=0){
    			odd++;
    		}
    	}
    
    	if(even>odd){
    		printf("READY FOR BATTLE");
    	}
    	else 
    		printf("NOT READY");
    
    
    	return 0;
    }

