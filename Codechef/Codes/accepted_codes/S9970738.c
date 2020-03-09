
    #include<stdlib.h>
    #include<stdio.h>
    int main()
    {
    	int n;
    	scanf("%d ",&n);
    	while(n>=1&&n<101)
    	{
    		int a[n],i,e=0,o=0;
    		for(i=0;i<n;i++)
    		scanf("%d",&a[i]);
    		for(i=0;i<n;i++)
    		{
    			if(a[i]%2==0)
    			e++;
    			else
    			o++;
    		}
    		if(e>o)
    		printf("READY FOR BATTLE");
    		else
    		printf("NOT READY");
    		
    	n=0;	 
    	}
    }

