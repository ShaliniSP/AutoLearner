
    #include<stdio.h>
    int main(){
    	long i,n,count=0,temp;
    	scanf("%ld",&n);
    	for(i=0;i<n;i++){
    		scanf("%ld",&temp);
    		if(temp%2==0)
    			count++;
    		else if(temp%2==1)
    			count--;
    	}
    	if(count>0)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	return 0;
    }
    

