
    #include<stdio.h>
    int main()
    {
    	int n,i,x=0,a[100];
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    			x++;
    		else
    			x--;
    	}
    	if(x>0)
    		printf("READY FOR BATTLE");
    	else
    		printf("NOT READY");
    	
    	
    	return 0;
    }

