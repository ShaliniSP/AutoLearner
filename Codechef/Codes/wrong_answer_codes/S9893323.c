
    #include <stdio.h>
    
    int main(void) {
    	int n,i,a[10],c=0,d=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    	    if(a[i]%2==0)
    	    c++;
    	    else
    	    d++;
    	}
    	if(c>d)
    	{
    	    printf("ready");
    	}
    	else
    	printf("not ready");
    	return 0;
    }

