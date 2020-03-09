
    #include <stdio.h>
    
    int main(void) {
    	// your code goes here
    	int n,i;
    	scanf("%d",&n);
    	int a[n];
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",&a[i]);
    	}
    	int even=0,odd=0;
    	for(i=0;i<n;i++)
    	{
    	    if(a[i]%2==0)
    	     {even++;
    	         break;
    	     }
    	    else
    	     {odd++;
    	         break;
    	     }
    	}
    	//printf();
    	if(even>odd)
    	{
    	    printf("READY FOR BATTLE\n");
    	}
    	else
    	 {printf("NOT READY\n");}
    	return 0;
    }
    
    

