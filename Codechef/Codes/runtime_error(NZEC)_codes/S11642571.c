
    #include<stdio.h>
    main()
    {
    	int n,a[100],i,k=0,j=0,h;
    	scanf("%d",&n);
    	for(i=1;i<=n;i++)
    	{
    	scanf("%d",&a[i]);
        }
    	for(i=1;i<=n;i++)
    	{
    		 h= a[i];
    		if(h%2==0)
    		k++;
    		else
    		j++;
    	}
    	if(j>=k)
    	printf("NOT READY\n");
    	else
    	printf("READY FOR BATTLE\n");	
    }

