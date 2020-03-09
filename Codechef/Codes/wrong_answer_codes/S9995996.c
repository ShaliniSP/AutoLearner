
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
    	int t, m, n, k;
    	scanf("%d",&t);
    	while(t--)
    	{
    		scanf("%d%d%d",&m,&n,&k);
    		if( abs(m-n)>k)
    			printf("%d\n",abs(m-n)-k);
    		
    		else
    			printf("0\n");
    			
    		
    	}
    	return 0;
    } 

