
    #include<stdio.h>
    
    int main(){
    	int i,N,x,lucky=0,unlucky=0;
    	scanf("%d",&N);
    	for(i=1;i<=N;i++){
    		scanf("%d",&x);
    		if(x%2==0) lucky++;
    		else unlucky++;
    	}
    	if(lucky>unlucky)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	return 0;
    }
    
    

