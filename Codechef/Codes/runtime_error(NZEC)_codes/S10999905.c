
    #include<stdio.h>
    void main()
    {
    	int n,i,oddcount=0,evencount=0;
    	scanf("%d",&n);
    	int a[n];
    	for(i=0 ; i<n ; i++)
    	{
    		scanf("%d",&a[i]);
    		if((a[i]%2) == 0)	evencount++;
    		else	oddcount++;
    	}
    	if(evencount > oddcount)	printf("READY FOR BATTLE\n");
    	else	printf("NOT READY\n");
    }

