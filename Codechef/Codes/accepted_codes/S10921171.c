
    #include<stdio.h>
    #include<string.h>
    main(){
    	int n;
    	scanf("%d",&n);
    	int a[n],i;
    	for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    	int even=0,odd=0;
    	for(i=0;i<n;i++){
    		if(a[i]%2==0)
    		even++;
    		else
    		odd++;
    	}
    	if(even>odd)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    } 

