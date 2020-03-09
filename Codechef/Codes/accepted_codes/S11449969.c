
    #include<stdio.h>
    int main()
    {
    	int n,a,c=0,d=0;
    	scanf("%d",&n);
    	while(n--)
    	{
    		scanf("%d",&a);
    		if(a%2==0)
    		   c++;
    		else
    		  d++;   
    	}
    	if(c>d)
    		printf("READY FOR BATTLE");
    	else
    	    printf("NOT READY");
    	return 0;
    }
    

