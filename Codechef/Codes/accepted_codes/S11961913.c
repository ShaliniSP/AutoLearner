
    #include <stdio.h>
    
    int main(void) {
    	int sol;
    	scanf("%d",&sol);
    	int wpn[sol];
    	int i=1,cnteven=0,cntodd=0;
    	while(i<=sol){
    	     scanf("%d",&wpn[i]);
    	     i++;
    	}
    	for(i=1;i<=sol;i++){
    	     if(wpn[i]%2==0){
    	          cnteven++;
    	          }
    	    else cntodd++;
    	}
    	if(cnteven>cntodd){
    	     printf("READY FOR BATTLE");
    	}
    	else printf("NOT READY");
    	return 0;
    }
    
    

