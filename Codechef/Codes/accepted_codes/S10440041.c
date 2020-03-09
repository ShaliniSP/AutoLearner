
    #include<stdio.h>
    main()
    {
    	int N,j,*a,even=0,odd=0;
    	scanf ("%d",&N);
    	a=(int*) calloc(N,sizeof (int));
    	for (j=0;j<N;j++)
    	{
    		scanf ("%d",&a[j]);
    		if (a[j]%2==0)
    		even++;
    		else
    		odd++;
    	}
    	if (even>odd)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	free (a);
    	return 0;
    }

