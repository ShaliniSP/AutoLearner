
    #include<stdio.h>
    main()
    {
    int w[100],i,n,j,ev=0,od=0;
    scanf("%d",&n);
    	for (i=0;i<n;i++) scanf("%d",&w[i]);
    	for(i=0;i<n;i++)
    	{
    		if (w[i]%2==0) ev++;
    		else od++;
    	}
    	if (ev>od) printf("READY FOR BATTLE");
    	else printf("NOT READY");
    }
    

