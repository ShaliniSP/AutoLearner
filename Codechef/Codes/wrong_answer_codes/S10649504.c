
    #include <stdio.h>
    
    int main(void) {
    	
    	int a,i,x,j;
    	int t[100];
    	int even=0;
    	int odd=0;
    	
    	scanf("%d",&a);
    	
    	
    	for(j=0;j<a;j++){
    	    scanf("%d",&t[j]);
    	}
    	
    	for(i=0;i<a;i++){
    	    
    	    x=t[i];
    	    
    	    if(x%2==0){
    	        even++;
    	    }
    	    
    	    else if(x%2==1){
    	        odd++;
    	    }
    	    
    	}
    	
    	
    	if(even>odd){
    	     printf("READY FOR THE BATTLE\n");
    	}
    	
    	else{
    	     printf("NOT READY\n");
    	   }
    	
    	
    	return 0;
    }
    

