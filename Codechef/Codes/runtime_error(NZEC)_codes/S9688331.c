
    #include<stdio.h>
    void main()
    {
    	int n,a[100],i,oc=0,ec=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    		scanf("%d",&a[i]);
    	for(i=0;i<n;i++){
    		if(a[i]%2==0)
    			ec++;
    		else
    			oc++;	
    	}
    	if(ec>oc)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    }

