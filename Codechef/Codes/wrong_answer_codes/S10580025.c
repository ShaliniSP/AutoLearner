
    #include<stdio.h>
    int main()
    {
    	int num,i=0,even=0,odd=0;
    	scanf("%d",&num);
    	int arr[num];
    	while(num--)
    	{
    		scanf("%d",&arr[i]);
    		i++;
    	}
    	for(num=0;num<=i;num++)
    	{
    		if(arr[num]%2==0)
    		{
    			even++;
    		}
    		else
    		{
    			odd++;
    		}
    	}
    	if(even>odd)
    	{
    		printf("READY FOR BATTLE\n");
    	}
    	else
    	{
    		printf("NOT READY\n");
    	}
    	
    	return 0;
    }
    

