
    #include <stdio.h>
    int main()
    {
    int N,i,s,c = 0, d =0;
    scanf("%d", &N);
    for( i = 0; i < N; i++)
    {
    	scanf("%d", &s);
    	if(s%2 == 0)
    	{
    		c++;
    	}
    	else
    		d++;
    }
    if(c > d)
    {
    	printf("READY FOR BATTLE");
    }
    else
    	printf("NOT READY");
    
    }
    
    

