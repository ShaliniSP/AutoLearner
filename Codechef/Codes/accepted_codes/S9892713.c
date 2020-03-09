
    #include <stdio.h>
    
    int main(void) {
    	int n,a,i,j=0,k=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",&a);
    	    ((a%2==0)?(j++):(k++));
    	}
        ((j>k)?printf("READY FOR BATTLE"):printf("NOT READY"));	
    	return 0;
    }
    

