
    #include <stdio.h>
    main()
    {
    	int n,w,x,y;
    	x=y=0;
    	//printf("Enter number of soldiers: ");
    	scanf("%d",&n);
    	while(n--)
    	{
    		//printf("Enter number of weapons: ");
    		scanf("%d",&w);
    		if(w%2==0) {x++;}
    		else {y++;}
    	}
    	//printf("%d",x);
    	//printf("%d",y);
    	if(x>y) {printf("READY FOR BATTLE\n");}
    	else {printf("NOT READY\n");}
    }
    

