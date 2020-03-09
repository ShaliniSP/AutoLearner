
    #include <stdio.h>
    #define LN 250010
    int a[LN],b[LN];
    
    int main(void) {
    	// your code goes here
    	int n,i,cnt,x;
    	unsigned long long int cnt;
    
    	    scanf("%d",&n);
    	    for(i=0;i<n;++i)
    	    {
    	        scanf("%d",&x);
    	        if(x&1)
    	            --cnt;
    	        else
    	            ++cnt;
    	    }
    	    if(cnt>0)
    	        printf("READY FOR BATTLE\n");
    	    else
    	        printf("NOT READY\n");
    	 
    	return 0;
    }
    
    

