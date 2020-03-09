
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
    	int n,*a,i,even=0,odd=0;
    	scanf("%d",&n);
    	a=(int*)malloc(n*sizeof(int));
    
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
    			printf("READY FOR BATTLE\n");
    		}
    		else
    		{
    			printf("NOT READY\n");
    		}
    
    
    	return 0;
    }

