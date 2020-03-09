
    #include<stdio.h>
    int main()
    {
    	int i,N,e=0,o=0;
    	scanf("%d",&N);
    	int a[N];
    	for(i=0;i<N;i++)
    	{
    		scanf("%d",&a[i]);
    		
    		if(a[i]%2==0)
    		{
    			e++;
    		}
    		
    		if(a[i]%2!=0)
    		{
    			o++;
    		}
    	}
    	
    	if(e>o)
    	printf("READY FOR BATTLE\n");
    	
    	if(o>=o)
    	printf("NOT READY\n");
    	return 0;
    }

