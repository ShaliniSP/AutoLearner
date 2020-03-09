
    #include <stdio.h>
    #include <stdlib.h>
    
    
    
    int main()
    {
    	int n,i,j=0,k=0;
        scanf("%d",&n);
    	int a[n];
    	for(i=0;i<n;i++)
    	{
    	scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    		j++;
    		
    		else
    		k++;
    		
    	}
    	if(j>k)
    printf("READY FOR BATTLE");
    	
    	else
    printf("NOT READY");
    
    	return 0;
    }

