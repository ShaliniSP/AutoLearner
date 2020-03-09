
    #include<stdio.h>
    int main(void)
    {
    	int size;
    	scanf("%d",&size);
    	int arr[size];
    	int i,even,odd;
    	even=odd=0;
    	for(i=0;i<size;i++)
    	scanf("%d",&arr[i]);
    		
    	for(i=0;i<size;i++)
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

