
    #include<stdio.h>
    int main()
    {
    	int i,j, b=0,c=0;
    	scanf("%d",&i);
    	int arr[i];
    	for(j=0 ; j<i ; j++)
    	{
    		scanf("%d",&arr[j]);
    	}
    	for(j=0 ; j<i ; j++)
    	{  
    		if(arr[j]%2==0)
    		{
    			c++;
    		}
    		else
    		b++;
    		
    	}
    	if(c>b)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY FOR BATTLE");
    }
    

