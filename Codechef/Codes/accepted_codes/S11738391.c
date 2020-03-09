
    #include <stdio.h>
    
    int main(void) {
    	int n,i=0,even=0,odd=0;
    	scanf("%d",&n);
    	int weap[n];
    	
    	for(i=0;i<n;i++)
    	    scanf("%d",&weap[i]);
    	
    	for(i=0;i<n;i++)
    	{
    	    if(weap[i]%2==0)
    	        even++;
    	    else
    	        odd++;
    	} 
    	if(even>odd)
    	    printf("READY FOR BATTLE\n");
    	else
    	    printf("NOT READY\n");
    	return 0;
    }

