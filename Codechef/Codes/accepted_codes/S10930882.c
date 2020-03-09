
    #include <stdio.h>
    
    int main(void) {
    	int n,i,c=0;
    	scanf("%d",&n);
    	int arr[n];
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",&arr[i]);
    	    if (arr[i]%2==0)
    	    c++;
    	}
    	if(c>n/2)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    }
    
    

