
    #include <stdio.h>
    
    int main(void) {
    	
    	int a,i,x;
    	int even,odd=0;
    	
    	scanf("%d",&a);
    	
    	int weapons[a];
    	
    	for(i=0;i<a;i++){
    	    
    	    x=weapons[i];
    	    
    	    if(x%2==0){
    	        even+=1;
    	    }
    	    
    	    else{
    	        odd+=1;
    	    }
    	    
    	}
    	
    	
    	if(even>odd){
    	    printf("READY FOR BATTLE");
    	}
    	
    	else{
    	    printf("NOT READY");
    	}
    	
    	
    	return 0;
    }
    

