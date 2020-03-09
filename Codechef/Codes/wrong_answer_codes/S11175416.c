
    #include<stdio.h>
    int main(){
    int i,max,t,N,C[3];
    scanf("%d",&t);
    	while(t--){
    	C[0]=0,C[1]=0,C[2]=0;
    		scanf("%d",&N);
    		char string[N];
    		scanf("%s",string);
    		for(i=0;i<N;i++){
    			switch(string[i]){
    				case 'R':C[0]++;break;
    				case 'G':C[1]++;break;
    				case 'B':C[2]++;break;
    			}
    		}
    	max=C[0];
    		for(i=1;i<3;i++){
    			if(max<C[i]){
    				max=C[i];
    			}
    		}
    	N-=max;
    	printf("%d\n",N);		
    	}
     
    return 0;
    } 
    

