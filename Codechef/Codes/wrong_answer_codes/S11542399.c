
    #include<stdio.h>
    int main()
    {
    	int n,i,w[n],even=0,odd=0;
    		scanf("%d",&n);
    		for(i=0;i<n;i++)
    		{
    			scanf("%d",&w[i]);
    			if(w[i]%2==0)
    				even++;
    			else
    				odd++;
    		}
    		if(even>odd)
    			printf("READY FOR WAR\n");
    		else
    			printf("NOT READY FOR WAR\n");
    			return 0;
    }
    

