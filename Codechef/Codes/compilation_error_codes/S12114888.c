
    #include<stdio.h>
    int main()
    {
    int t,a[100],i,j,even,odd;
    scanf("%d",&t);
    	for(i=0;i<t;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	for(j=0;j<n;j++)
    	{
    		if(a[j]%2==0){even++;}			
    		else odd++;
    	}
    	if(even > odd || even == odd)
    	{
    		printf("READY FOR BATTLE\n");
    	}
                else if(even < odd)
    	{
    		printf("NOT READY\n");
    	}
    return 0;
    }

