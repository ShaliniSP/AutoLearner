
    #include <stdio.h>
    
    int main(void) {
    	int n,a[100],i=0,j=0,k=0,even=0,odd=0,b[100],c[100];
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    	for(i=0;i<n;i++)
    	{
    	if(a[i]%2==0)
    	 {
    	    
    	    b[j]=a[i];
    	    even++;}
    	else
    	{
    	    c[k]=a[i];
    	    odd++;
    	    
    	}
    }
    	if(even>odd)
    	{
    	    printf("READY FOR BATTLE");
    	    
    	}
    	else
    	{
    	    printf("NOT READY");
    	}
    	return 0;
    }
    

