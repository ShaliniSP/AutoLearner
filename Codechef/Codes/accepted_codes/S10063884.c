
    #include <stdio.h>
    
    int main(void) {
    	int n,a[100],i,c1=0,c2=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++){
    	    scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++){
    	    if(a[i]%2 == 0)
    	      c1++;
    	      else{
    	          c2++;
    	      }
    	      }
    	   if(c1>c2){
    	       printf("READY FOR BATTLE");
    	   }else{
    	       printf("NOT READY");
    	   }
    	return 0;
    }
    

