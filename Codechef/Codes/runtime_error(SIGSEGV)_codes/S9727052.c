
    #include<stdio.h>
    void main(){
    	int nos;
    	int A[nos];
    	scanf("%d",&nos);
    	int count=0;
    	int i=0;
    
    	
    	for(i=0;i<nos;i++){
    	scanf("%d",&A[i]);
        if(A[i]%2==0){
         count++;
        }
    	}
    
    	if(count>(nos/2)){
    		printf("\n READY FOR BATTLE");
    	}
    	else
    		printf("\n NOT READY");
    	
    }
    		
    

