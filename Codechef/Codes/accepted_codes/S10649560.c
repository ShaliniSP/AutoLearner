
    #include <stdio.h>
    
    int main(void) {
    	
    	int a,i,j,y;
    	int lucky=0;
    	int unlucky=0;
    	int x[100];
    	scanf("%d",&a);
    	
    	for(i=0;i<a;i++){
    	    scanf("%d",&x[i]);
    	}
    	
    	
    	for(j=0;j<a;j++){
    	    
    	    y=x[j];
    	    
    	    if(y%2==0){
    	        lucky+=1;
    	    }
    	    
    	    else{
    	        unlucky+=1;
    	    }
    	    
    	}
    	
    	if(lucky>unlucky){
    	    printf("READY FOR BATTLE");
    	}
    	
    	else{
    	    printf("NOT READY");
    	}
    	
    	
    	
    	
    	
    	
    	return 0;
    }
    

