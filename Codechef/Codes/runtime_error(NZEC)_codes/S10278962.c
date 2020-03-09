
    #include<stdio.h>
    main()
    {
    	int n,ec=0,oc=0,i;
    	scanf("%d",&n);
    	int a[n];
    	for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    		ec++;
    		else
    		oc++;
    	}
    	if(ec>oc)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    }

