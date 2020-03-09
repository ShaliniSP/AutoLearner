
    #include <stdio.h>
    
    int main(void) {
    	int n;
    	int a[100];
    	int e=0,o=0;
    	int i;
    	for(i=0;i<n;i++)
    	{
    	    scanf("%i",&a[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    	    if(a[i]%2==0)
    	    e++;
    	    else
    	    o++;
    	}
    	(e>o)?printf("READY FOR BATTLE"):printf("NOT READY");
    	return 0;
    }
    
    

