
    //mahasena
    #include<stdio.h>
    int main()
    {
    	
    	int n;
    	scanf("%d",&n);
    		if(n<=100)
    		{
    		int ar[n];
    		int i=0;
    		for(i=0;i<n;i++)
    		scanf("%d",&ar[i]);
    		int lucky=0,unlucky=0;
    		for(i=0;i<n;i++)
    		{
    			if(ar[i]%2==0)
    			lucky++;
    			else
    			unlucky++;
    		}
    		if(lucky>unlucky)
    		printf("READY FOR BATTLE\n");
    		else
    		printf("NOT READY\n");
    		}
    	return 0;
    }	
    

