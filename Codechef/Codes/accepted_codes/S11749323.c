
    #include <stdio.h>
    
    int main(void) {
    	int t,j ;
    	scanf("%d",&t);
    	j=t;
    	
    	
    		int a[150],k=0,n=0,i;
    		for(i=0;i<j;i++){
    			scanf("%d",&a[i]);
    		}
    		for(i=0;i<j;i++){
    			
    		
    			if (a[i]%2==0){
    				k++;
    			}
    			else
    			n++;
          }
    	if(k>n)	
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	
    	return 0;
    }
    

