
    #include<stdio.h>
    int main(void){
    	int t,n,i;
    	
    		int count=0;
    		int count1=0;
    		scanf("%d",&n);
    		int a[n+1];
    		for(i=1;i<=n;i++){
    			scanf("%d",&a[i]);
    			if(a[i]%2==0)
    			    count++;
    			else
    			    count1++;
    			
    		}
    		
    		
    		if(count>count1)
    		       printf("READY FOR BATTLE");
    	    else
    	           printf("NOT READY");
    	return 0;
    	
    	
    }
    

