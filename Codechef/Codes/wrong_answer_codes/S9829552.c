
    #include <stdio.h>
    
    int main()
    {
    	int no_soldier;
    	int index = 0;
    	int count_even = 0;
    	int count_odd = 0;
    	
    	printf("Enter no of soldiers\n");
    	scanf("%d", &no_soldier);
    	
    	int arr[no_soldier];
    	for (index = 0; index < no_soldier; index++)
    	{
    		scanf("%d", &arr[index]);
    	}
    	
    	for (index = 0; index < no_soldier; index++)
    	{
    		if (arr[index] % 2 == 0)
    		{
    			count_even++;
    		}
    		else
    		{
    			count_odd++;
    		}
    	}
    	if (count_even > count_odd)
    	{
    		printf("READY FOR BATTLE\n");
    	}
    	else
    	{
    		printf("NOT READY\n");	
    	}
    	return 0;
    }

