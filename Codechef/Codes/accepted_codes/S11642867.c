
    #include <stdio.h>
    int main()
    {
    	int N, odd=0,even=0, inp;
    	scanf("%d", &N);
    	while (N--)
    	{
    		scanf("%d", &inp);
    		if (inp%2)
    			odd++;
    		else
    			even++;
    	}
    	if (even > odd)
    		printf("READY FOR BATTLE\n");
    	else printf("NOT READY\n");
    	return 0;
    }

