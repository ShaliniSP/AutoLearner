
    #include<stdio.h>
    main()
    {
    	int n,a[100],i,k=0,j=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    	scanf("%d",&a[i]);
        }
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    		k++;
    		else
    		j++;
    	}
    	if(j>=k)
    	printf("NOT READY");
    	else
    	printf("READY FOR BATTLE");	
    }

