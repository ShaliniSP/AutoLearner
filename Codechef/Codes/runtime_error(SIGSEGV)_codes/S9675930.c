
    #include <stdio.h>
    #include <string.h>
    
    int main(void) {
    	// your code goes here
    	int i,t,c=0,d=0,a[10];
    	scanf("%d\n",&t);
    	for(i=1;i<=t;i++)
    	{
    	    scanf("%d",&a[i]);
    	    if(a[i]%2==0)
    	    {
    	        c++;
    	    }
    	    else
    	    {
    	        d++;
    	    }
    	}
    	    if((c==d)||(c<d))
    	    {
    	        printf("NOT READY");
    	    }
    	    else
    	    {
    	        printf("READY FOR BATTLE");
    	    }
    	return 0;
    }
    
    

