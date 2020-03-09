
    #include<stdio.h>
    
    int main()
    {
    	int n,arr[100],i,j,a=0,b=0;
    	
    	scanf("%d",&n);
    	
    	for(i=0;i<n;i++)
    	scanf("%d ",&arr[i]);
    	
    	for(j=0;j<n;j++)
    	{			
    		if(arr[j]%2==0)
    		a++;
    		
    		else
    		b++;
    	}
    	
    	if(a>b)
    	printf("READY FOR BATTLE");
    	
    	else
    	printf("NOT READY");
    	
    	return 0;
    }

