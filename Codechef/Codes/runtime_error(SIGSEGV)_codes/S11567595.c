
    #include <stdio.h>
    #include <stdlib.h>
    
    int main(void) {
    	// your code goes here
    	int arr[2],n,*a,i;
    	scanf("%d",&n);
    	a=(int *) malloc(sizeof(int)*n);
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",*(a+i));
    	    if(*(a+i)%2==0)
    	        arr[0]++;
    	    else
    	        arr[1]++;
    	}
    	if(arr[0]>arr[1])
    	    printf("READY FOR BATTLE");
    	else
    	    printf("NOT READY");
    	return 0;
    }
    
    

