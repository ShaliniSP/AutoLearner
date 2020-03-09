
    #include <stdio.h>
    
    int main(void) {
    	int t,e,o;
    	//enter number of soldiers
    	scanf("%d",&t);
    	while(t--){
    	    //Enter the number of weapons
    	    scanf("%d",&e);
    	    if(e%2!=0){
    	        ++o;
    	    }
    	    e=t-o;
    	} 
    	if(e>o){
    	    printf("READY FOR BATTLE\n");
    	}
    	else{
    	    printf("NOT READY\n");
    	}
    	return 0;
    }
    

