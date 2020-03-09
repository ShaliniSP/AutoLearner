
    #include<stdio.h>
    int main()
    {	
    	int n;
    	scanf("%d",&n);
    	int e=0,o=0,k,i;
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&k);
    		if(k&1)
    		o++;
    		else
    		e++;
    	}
    	if(e>o)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    }
    

