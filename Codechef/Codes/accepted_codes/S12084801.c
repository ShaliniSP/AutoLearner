
    #include <stdio.h>
    
    int main(void) {
    	// your code goes here
    	int i,e=0,o=0,n,s;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",&s);
    	 if(s%2==0)
    	 e++;
    	 else
    	 o++;
    	}
    	if(e>o)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    }
    
    

