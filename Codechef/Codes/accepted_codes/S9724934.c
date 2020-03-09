
    #include<stdio.h>
    
    int main()
    {
    	int n,i,a,u=0,l=0;
    	scanf("%d",&n);
    	
    	for(i=1;i<=n;i++)
    	{
            scanf("%d",&a);
    		if(a%2==0)
    		l++;
    		else
    		u++;
    	}
    	    if(l>u)
    	    printf("READY FOR BATTLE");
    	    else
    	    printf("NOT READY");
    	return 0;	
    }		
    

