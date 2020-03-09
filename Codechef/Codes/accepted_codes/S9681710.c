
    #include <stdio.h>
    
    int main(void) {
    	// your code goes here
    	
    	int n;
    	scanf("%d",&n);
    	int arr[n];
    	int i,even=0,odd=0;
    	for(i=0; i<n; i++)
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
    
    

