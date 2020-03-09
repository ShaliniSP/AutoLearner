
    #include<stdio.h>
    main()
    {
    int w[100],i,n,j,ev=0,od=0;
    printf("enter no. of warriors:");
    scanf("%d",&n);
    printf("enter no. of weapons for each warrior :");
    	for (i=0;i<n;i++)
    	{
    	scanf("%d",&w[i]);
       	}
    
    	for(i=0;i<n;i++)
    	{
    		if (w[i]%2==0)
    		{
    		 ev=ev+1;
    		}
    		else
    		{
    		od=od+1;
    		}
    	}
    	if (ev>od) printf("READY FOR BATTLE");
    	else printf("NOT READY");
    }
    

