
    #include<stdio.h>
    int a[100];
    int main()
    {
        int n,i,p=0,q=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        	scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++)
        {
        	if(a[i]%2==0)
        	{
        		p++;
    		}
    		else
    		q++;
    	}
    	if(p>q)
    	{
    		printf("READY FOR BATTLE");
    	}
    	else
    	{
    		printf("NOT READY");
    	
    	}
    }

