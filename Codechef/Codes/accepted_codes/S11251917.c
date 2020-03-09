
    #include<stdio.h>
    
    int main()
    {
    	int i,n,even=0,odd=0,arr[200];
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&arr[i]);
    		if(arr[i]%2==0)
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

