
    #include<stdio.h>
    int main()
    {	int n;
    	scanf("%d\n",&n);
    	int arr[100];
    	int i,even=0,odd=0;
    	//scanf("%d",arr);
    	for(i=0;i<n;i++)
    	{
    		int s;
    		scanf("%d",&s);
    		//printf("%d",s);
    		arr[i]=s;
    		//printf("%d",arr[i]);
    	}
    	for(i=0;i<n;i++)
    	{
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

