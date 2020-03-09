
    #include <stdio.h>
    
    int main(){
    int n;
    scanf("%d",&n);
    int a[n],ev=0,od=0,i;
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
    	if(a[i]%2==0){
    		ev++;
    	}else{
    		od++;
    	}
    }
    if(ev>od){
    	printf("READY FOR BATTLE\n");
    }else{
    	printf("NOT READY\n");
    }
    return 0;	
    }
    

