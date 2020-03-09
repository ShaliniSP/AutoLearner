
    #include <stdio.h>
    #include <stdlib.h>
    
    int main(void) {
    	int n,*a,i,even=0,odd=0,luck;
    	scanf("%d",&n);
    	a=malloc(n*sizeof(int));
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",&a[i]);
    	    if(a[i]%2==0)
    	    {
    	        even++;
    	    }
    	    else
    	    {
    	        odd++;
    	    }
    	}
    	if(even>odd)
    	{
    	    printf("READY FOR BATTLE");
    	   
    	}
    	else
    	{
    	    printf("NOT READY");
    	}
    	
    	return 0;
    }
    
    

