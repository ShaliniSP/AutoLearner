
    #include<stdio.h>
    int main()
    {
    	int test,n,i,j,even,odd,a;
    		even=odd=0;
    		scanf("%d",&n);
    		for(j=0;j<n;j++)
    		{
    			scanf("%d",&a);
    			if(a%2==0)
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

