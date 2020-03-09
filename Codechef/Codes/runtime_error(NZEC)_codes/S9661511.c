
    #include<stdio.h>
    int main (void)
    {
    	int n;
    	scanf("%d",&n);
    	int w,o=0,e=0;
    	while(n--)
    	{
    		scanf("%d",&w);
    	
    		if(w % 2 == 0)
    			e++;
    		else
    			o++; 
    	}
    	if(o > e)
    		printf("NOT READY\n");
    	else
    		printf("READY FOR BATTLE\n");
    }

