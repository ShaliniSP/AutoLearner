
    #include<stdio.h>
    int main(void)
    {
    	int a, b, c, t1=0;
    	scanf("%d", &a);
    	c =a;
    	while(a--)
    	{
    		scanf("%d", &b);
    		if((b%2) ==0)
    		{
    			t1++;
    		}
    	}
    	if(t1>c/2)
    	{
    		printf("READY FOR BATTLE\n");
    	}
    	else
    	{
    		printf("NOT READY\n");
    	}
    	return 0;
    }

