
    #include <stdio.h>
    
    int main(){
    	
    	int n;
    	scanf("%d", &n);
    	int arr[n];
    	int count = 0;
    	int i;
    	for( i =0; i < n; i++){
    		scanf("%d", &arr[i]);
    		if(arr[i] %2 == 0)
    			count++;
    		else
    			count--;
    	}
    	if(count > 0)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	return 0;
    	
    }

