
    #include <stdio.h>
    main()
    {
    	int n,i,j,a=0,b=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",j);
    		if(j%2==0)
    		a=a+1;
    		else
    		b=b+1;
    	}
    	if(a>b)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    }

