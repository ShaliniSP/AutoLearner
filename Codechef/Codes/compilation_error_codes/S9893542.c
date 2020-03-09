
    #include <stdio.h>
     
    int main(void) {
    	int N,i,A[10],c=0,d=0;
    	scanf("%d",&N);
    	for(i=0;i<N;i++){
    	    scanf("%d",&A[i]);
    	    if(A[i]%2==0)
    	    c++;
    	    else
    	    d++;{
    	if(c>d)
    	    printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    } 
    

