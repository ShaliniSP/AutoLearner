
    #include<stdio.h>
    main()
    {
    	int m[100],n=0,k=0,t,i,c;
    	scanf("%d",&t);
    	for(i=0;i<t;i++)
    	{
    		scanf("%d",&m[i]);
    		if(m[i]%2==0)
    		n++;
    		else
    		k++;
    	}
    	if(n>k)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY");
    	return 0;
    }
    

