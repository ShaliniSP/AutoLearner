
    #include <stdio.h>
     
    int main() {
    	int n;
    	int arr[2];
    	arr[0]=0;
    	arr[1]=0;
    	scanf("%d",&n);
    	int c;
    	while(t--){
    		scanf("%d", &c);
    		arr[c % 2] = arr[c % 2] + 1;
    	}
    	
    	if(arr[0] > arr[1]){
    		printf("READY FOR BATTLE");
    	} else {
    		printf("NOT READY");
    	}
    	
    	return 0;
    }

