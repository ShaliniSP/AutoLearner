
    #include<stdio.h>
    int main(){
    	int n,i,j,a[1000],even=0,odd=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++){
    	  scanf("%d ",&a[i]);
    	  	
    	}
    	for(j=0;j<n;j++){
    		if(a[j]%2==0)
    			even++;
    		
    		else
    		odd++;
    		
    	}
    	if(even>odd)
    		printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    }

