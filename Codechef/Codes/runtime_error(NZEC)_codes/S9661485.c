
    #include<stdio.h>
    int main (void)
    {
    	int n;
    	scanf("%d",&n);
    	int w,i,odd=0,even=0;
    	while(n--)
    	{
    		scanf("%d",&w);
    	
    		if(w % 2 == 0)
    			even++;
    		else
    			odd++; 
    	}
    	if(odd >= even)
    		printf("NOT READY\n");
    	else
    		printf("READY FOR BATTLE\n");
    }

