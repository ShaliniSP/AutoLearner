
    #include <stdio.h>
    int main()
    {
    	int soldiers, even=0, odd=0;
    	scanf ("%d", &soldiers);
    	while(soldiers--)
    	{
    		int weapons;
    		scanf("%d", &weapons);
    		if (weapons%2==0)
    		even++;
    		else
    		odd++;
    	}
    	if (even>odd)
    	printf("READY FOR BATTLE");
    	else
    	printf ("NOT READY");
    	return 0;
    }

