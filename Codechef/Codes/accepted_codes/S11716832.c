
    #include<stdio.h>
    
    int main(void)
    {
    	int N,i,j;
    	int lucky = 0;
    	int unlucky = 0;
    	scanf("%d", &N);
    	for(i = 0; i < N ; i++){
    		scanf("%d", &j);
    		if( j % 2 == 0){
    			lucky = lucky + 1;
    		}
    		else{
    			unlucky = unlucky + 1;
    		}
    	}
    		if( lucky > unlucky)
    			printf("READY FOR BATTLE\n");
    		else{
    			printf("NOT READY\n");
    		}  
    	
    return 0;
    }
    

