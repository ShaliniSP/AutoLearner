
    #include <stdio.h>
    
    int main(void) {
    	// your code goes here
    	int c=0,c1=0,n,i;
    	scanf("%d",&n);
    	while(n<1||n>100){
    	        scanf("%d",&n);
    	}
    	int a[n];
    	for(i=0;i<n;i++){
    	    scanf("%d",&a[i]);
    	    while(a[i]<1||a[i]>100){
    	        scanf("%d",&a[i]);
    	    }
    	    if(a[i]%2==0){
    	        c++;
    	    }
    	    else{
    	        c1++;
    	    }
    	}
    	if(c>c1){
    	    printf("READY FOR BATTLE");
    	}
    	else{
    	    printf("NOT READY");
    	}
    	return 0;
    }
    
    

