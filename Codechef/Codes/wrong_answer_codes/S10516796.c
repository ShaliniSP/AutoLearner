
    #include<stdio.h>
    #include<stdlib.h>
    
    int main()
    {
    	int i,a[100],count1=0,count2=0,n;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);		
    	}
    		for(i=0;i<n;i++)
    		{
    			if(a[i]%2==0)			
    				count1++;							
    			else			
    				count2++;							
    		}
    		if(count1>count2)
    			printf("ready for battle");			
    		else
    			printf("not ready for battle");			
    		return 0;
    }

