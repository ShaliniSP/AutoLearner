
    #include<stdio.h>
    main()
    {
    	int n,a,k=0,j=0;
    	scanf("%d",&n);
    	while(n--)
    	{
    		scanf("%d",&a);
    		if(a%2==0)
    		k++;
    		else
    		j++;
    	}
    	if(j>=k)
    	printf("NOT READY\n");
    	else
    	printf("READY FOR BATTLE\n");	
    }

