
    #include <stdio.h>
    
    int main(void) {
    	int N,i,temp, even_count=0,odd_count=0;
    	
    	scanf("%d",&N);
    	for(i=0;i<N;i++)
    	{
    	    scanf("%d",&temp);
    	    if(temp%2==0)
    	        even_count++;
    	    else
    	        odd_count++;
    	}
    	if(even_count>odd_count)
    	    printf("READY FOR BATTLE");
    	else
    	    printf("NOT READY");
    	return 0;
    }
    

