
    #include <stdio.h>
    
    int main(void) {
    	
    	int a,i,x,j;
    	int even=0;
    	int odd=0;
    	
    	scanf("%d",&a);
    	
    	int t[a];
    	
    	for(j=0;j<a;j++){
    	    scanf("%d",&t[j]);
    	}
    	
    	for(i=0;i<a;i++){
    	    
    	    x=t[i];
    	    
    	    if(x%2==0){
    	        even+=1;
    	    }
    	    
    	    else if(x%2==1){
    	        odd+=1;
    	    }
    	    
    	}
    	
    	
    	if(even>odd){
    	     printf("READY FOR THE BATTLE");
    	}
    	
    	else if(odd>=even){
    	     printf("NOT READY");
    	   }
    	
    	
    	return 0;
    }
    

