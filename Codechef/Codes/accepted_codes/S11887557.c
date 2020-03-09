
    #include<stdio.h>
    int main()
    {
    	int n,i;
    	scanf("%d",&n);
    	int A[n];
        for(i=0;i<n;i++)
    			scanf("%d",&A[i]);
    		
    	int e=0,o=0;
    	for(i=0;i<n;i++)
    	{
    		if(A[i]&1)
    		o++;
    		else
    		e++;
    	}
    	
    	if(e>o)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    
     return 0;
     }
    

