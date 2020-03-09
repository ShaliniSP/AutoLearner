
    #include <stdio.h>
    
    int main(void) {
    	int t,n,s=0,b,i;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",&b);
    	    if(b%2==0)
    	    s++;
    	}
    	if(s>n/2)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	return 0;
    }
    
    

