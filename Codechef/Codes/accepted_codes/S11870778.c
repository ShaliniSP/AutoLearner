
    #include<stdio.h>
    int main(){
    	int N,A[100],i,even=0,odd=0;
    	scanf("%d",&N);
    	for(i=0;i<N;i++){
    		scanf("%d",&A[i]);
    		if(A[i]%2==0)
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

