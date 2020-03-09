
    #include <stdio.h>
    
    int main(void)
    {
    	
    	int No_of_soldiers,i=0;
    	int weapons[100];
    	
    	int count_of_even=0,count_of_odd=0;
    	
    	//Accepting the number of soldiers
    	printf("Enter the number of soldiers\n");
    	scanf("%d",&No_of_soldiers);
    	
    	//To check whther count of soldier is between 1 to 100
    	if(No_of_soldiers <= 100)
    	{
    	    //Accepting th weapons for each soldier
        	printf("Enter the number of weapons assigned to each soldiers\n");
        	for(i=0;i<No_of_soldiers;i++)
        	{
        	    scanf("%d",&weapons[i]);
        	    
        	    if(weapons[i]%2==0)
        	    {
        	        count_of_even++;
        	    }
        	    else
        	    {
        	        count_of_odd++;
        	    }
        	}
        	
        	//Checking which count is more
        	if(count_of_even>count_of_odd)
        	{
        	    printf("Ready for Battle\n");
        	}
        	else
        	{
        	    printf("Not Ready for Battle\n");
        	}
    	}
    	else
    	{
    	    printf("Enter the number of soldiers between 1 to 100");
    	}
    	return 0;
    }
    
    

