
    #include <stdio.h>
    
    int main(void) {
    	int t,e,o,i;
    	//enter number of soldiers
    	scanf("%d",&t);
    	i=t;
    	o=0;
    	while(t--){
    	    //Enter the number of weapons
    	    scanf("%d",&e);
    	    if(e&1){
    	        ++o;
    	    }
    	} 
    	e=i-o;
    	if(e > o){
    	    printf("READY FOR BATTLE\n");
    	}
    	else{
    	    printf("NOT READY\n");
    	}
    	return 0;
    }
    
    

