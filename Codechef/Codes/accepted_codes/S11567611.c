
    #include <stdio.h>
    #include <stdlib.h>
    
    int main(void) {
    	// your code goes here
    	int b=0,c=0,n,*a,i;
    	scanf("%d",&n);
    	a=(int *) malloc(sizeof(int)*n);
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",(a+i));
    	    if(*(a+i)%2==0)
    	        b++;
    	    else
    	        c++;
    	}
    	if(b>c)
    	    printf("READY FOR BATTLE");
    	else
    	    printf("NOT READY");
    	return 0;
    }
    
    

