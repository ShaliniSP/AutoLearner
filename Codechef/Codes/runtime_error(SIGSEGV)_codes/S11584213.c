
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
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	return 0;
    }

