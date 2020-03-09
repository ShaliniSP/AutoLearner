
    #include<stdio.h>
    int main(){
    	int n;
    	scanf("%d",&n);
    	int a,even=0,odd=0;
    	while(n--){
    		scanf("%d",&a);
    		if(a%2==0){
    			even++;
    		}
    		else{
    			odd++;
    		}
    	}
    	if(even>odd){
    		printf("READY FOR BATTLE");
    	}
    	else{
    		printf("NOT READY");
    	}
    	return 0;
    }

