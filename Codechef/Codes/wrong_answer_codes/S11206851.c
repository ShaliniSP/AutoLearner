
    #include <stdio.h>
    
    int main(void) {
    	int t,no1,no2;
    	scanf("%d",&t);
    	while(t>0)
    	{
    	    scanf("%d%d",&no1,&no2);
    	    if(no1>no2)
    	    {
    	        printf("\n>");
    	        
    	}
    	else if(no1<no2)
    	{
    	    printf("\n<");
    	    
    	}
    	else
    	{
    	    printf("\n=");
    	}
    	t--;
    	
    }
    return 0;
    }

