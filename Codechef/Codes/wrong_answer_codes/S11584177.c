
    #include <stdio.h>
    
    int main(void) {
    	int a[10],n,e=0,o=0,i;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    		e++;
    		else
    		o++;
    	}
    	if(e>o)
    	printf("Ready for Battle");
    	else
    	printf("Not Ready");
    	return 0;
    }
    

