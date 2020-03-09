
    #include<stdio.h>
    int main()
    {
    	int n,arr,count=0,i,b=0;
    	scanf("%d",&n);
    	for(i=1;i<=n;i++)
    		scanf("%d",&arr[i]);
    	for(i=1;i<=n;i++)
    	{
    		if(arr[i]%2==0)
    			count++;
    		else
    			b++;
    	}
    	if(count>b)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");	
    }

