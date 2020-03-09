
    #include<stdio.h>
    
    int main(){
    	int N;
    	scanf("%d", &N);
    	int sena[N], i, count1=0, count2 =0;
    	for(i=1; i<=N; i++){
    		scanf("%d", &sena[i]);
    		if(sena[i]%2==0)
    		count1++;
    		else
    		count2++;
    	}
    	if(count1>count2)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	return 0;
    }

