
    #include<stdio.h>
    #include<math.h>
    main()
    {
    	int n,i,e=0,o=0;
    	int a[n];
    	scanf("%d",&n);
    	for(i=0;i<=n;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    		e+=1;
    		else
    		o+=1;
    	}
    	if(e>o)
    	printf("READY FOR BATTLE \n");
    	else
    	printf("NOT READY \n");
    }

