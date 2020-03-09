
    #include<stdio.h>
     
    int main()
    {
    	int n, i, odd = 0, even = 0;
    	scanf("%d", &n);
    	int weapons[n];
    	for(i=0; i<n; i++)
    		weapons[i] = 0;
    	for(i=0; i<n; i++)
    	{
    		scanf("%d", &weapons[i]);
    		if((weapons[i]%2) == 0)
    			even++;
    		else
    			odd++;
    	}
    	if(even > odd)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	return 0;
    }

