
    #include <stdio.h>
    main()
    {
    	int n,i,a=0,b=0;
    	scanf("%d",&n);
    	for(i=0;i<=n-1;i=i++)
    	{
    		scanf("%d",&i);
    		if(i%2==0)
    		a=a+1;
    		else
    		b=b+1;
    	}
    	if(a>b)
    	printf("READY FOR BATTLE");
    	if(a<=b)
    	printf("NOT READY");
    }

