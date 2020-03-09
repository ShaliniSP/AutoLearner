
    #include <stdio.h>
    int main() {
    	// your code goes here
    	int N;
    	int ctrE=0;
    	int ctrO=0;
    	scanf("%d\n",&N);
    	int A[N];
    	int i=0;
        for(;i<N;i++){
            scanf("%d ",&A[i]);
            if(A[i]%2==0)
                ctrE++;
            else if(A[i]%2!=0)
                ctrO++;
        }
        if(ctrE>ctrO)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        
        
    	return 0;
    } 

